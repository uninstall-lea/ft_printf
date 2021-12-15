/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:51:21 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/02 02:32:09 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t elem_size, size_t elem_count)
{
	void	*new_elem;

	if (elem_size == 0 || elem_count == 0)
	{
		elem_size = 1;
		elem_count = 1;
	}
	new_elem = malloc(elem_size * elem_count);
	if (!new_elem)
		return (NULL);
	ft_bzero(new_elem, elem_size * elem_count);
	return (new_elem);
}
