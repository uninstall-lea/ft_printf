/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:02:52 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/01 03:25:47 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *) ptr;
	while (i < n)
	{	
		dest[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
