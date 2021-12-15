/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:56:19 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/03 00:58:21 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nblen(int nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*convert_int;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nblen(n);
	convert_int = ft_calloc(1, len + 1);
	if (!convert_int)
		return (NULL);
	if (n < 0)
	{
		convert_int[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		convert_int[0] = '0';
	while (n != 0)
	{
		convert_int[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (convert_int);
}
