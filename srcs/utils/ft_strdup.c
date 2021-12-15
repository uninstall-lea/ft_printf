/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:11:00 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/01 17:44:57 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(src);
	new_str = ft_calloc(sizeof(char), len + 1);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, src, len + 1);
	return (new_str);
}
