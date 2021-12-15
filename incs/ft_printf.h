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
int		print_c(va_list args);
int		print_s(va_list args);
int		print_p(va_list args);
int		print_x(va_list args);
int		print_X(va_list args);
int		print_i(va_list args);
int		print_ui(va_list args);
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
