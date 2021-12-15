#include "ft_printf.h"

int	print_s(va_list args)
{
	const char	*str;

	str = va_arg(args, const char *);
	if (!str)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}
