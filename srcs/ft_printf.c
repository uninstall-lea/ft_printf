/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:27:05 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/16 21:14:50 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_fptr	dispatch(const char conv)
{
	int		index;
	t_fptr	callback[9];

	callback[0] = print_char;
	callback[1] = print_str;
	callback[2] = print_address;
	callback[3] = print_hexa_lowercase;
	callback[4] = print_hexa_uppercase;
	callback[5] = print_int;
	callback[6] = print_int;
	callback[7] = print_unsigned_int;
	callback[8] = print_percent;
	index = ft_strchr(FORMAT_SPECIFIERS, conv) - FORMAT_SPECIFIERS;
	return (callback[index]);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			nprint_char;
	t_fptr		print_conv;

	nprint_char = 0;
	va_start(args, format);
	while (format && *format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{	
			format++;
			print_conv = dispatch(*format);
			nprint_char += (*print_conv)(args);
		}
		else
			nprint_char += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (nprint_char);
}
