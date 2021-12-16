/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:27:27 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/16 21:10:30 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(va_list args)
{
	char	*str;
	int		nb_len;

	str = ft_itoa(va_arg(args, int));
	nb_len = ft_strlen(str);
	write(1, str, nb_len);
	free(str);
	return (nb_len);
}
