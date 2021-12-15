#include "ft_printf.h"

int	print_X(va_list args)
{
	char	*str;
	int		nb_len;

	str = ft_utoa_base(va_arg(args, unsigned int), "0123456789ABCDEF", 16);
	nb_len = ft_strlen(str);
	write(1, str, nb_len);
	free(str);
	return (nb_len);
}
