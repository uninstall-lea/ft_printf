/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:28:10 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/16 21:09:15 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_lowercase(va_list args)
{
	char	*str;
	int		nb_len;

	str = ft_utoa_base(va_arg(args, unsigned int), "0123456789abcdef", 16);
	nb_len = ft_strlen(str);
	write(1, str, nb_len);
	free(str);
	return (nb_len);
}
