/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:27:35 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/16 21:12:19 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_address(va_list args)
{
	char	*str;
	int		len;

	str = ft_lutoa_base(va_arg(args, unsigned long), "0123456789abcdef", 16);
	len = ft_strlen(str);
	write(1, "0x", 2);
	write(1, str, len);
	free(str);
	return (len + 2);
}
