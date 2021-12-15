#include "ft_printf.h"

int	print_i(va_list args)
{
	char	*str;
	int		nb_len;

	str = ft_itoa(va_arg(args, int));
	nb_len = ft_strlen(str);
	write(1, str, nb_len);
	free(str);
	return (nb_len);
}
