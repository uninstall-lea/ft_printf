#include "ft_printf.h"

int	print_p(va_list args)
{
	char	*str;
	int		len;

	str = ft_lutoa_base(va_arg(args, unsigned long), "0123456789abcdef", 16);
	len = ft_strlen(str);
	write(1, "0x", 2);
	write(1, str, len);
	free(str);
	return (len + 2);
}
