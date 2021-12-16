/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbisson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:26:07 by lbisson           #+#    #+#             */
/*   Updated: 2021/12/16 21:17:34 by lbisson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define FORMAT_SPECIFIERS "cspxXdiu%"

typedef int	(*t_fptr)();

/* WHERE ALL BEGINS */
int		ft_printf(const char *format, ...);

/* CONVERSIONS */
int		print_char(va_list args);
int		print_str(va_list args);
int		print_address(va_list args);
int		print_hexa_lowercase(va_list args);
int		print_hexa_uppercase(va_list args);
int		print_int(va_list args);
int		print_unsigned_int(va_list args);
int		print_percent(va_list args);

/* UTILS */
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elem_size, size_t elem_count);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);
char	*ft_itoa(int n);
char	*ft_utoa_base(unsigned int nb, const char *base, size_t base_len);
char	*ft_lutoa_base(unsigned long nb, const char *base, size_t base_len);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *start);

#endif
