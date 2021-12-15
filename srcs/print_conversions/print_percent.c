#include "ft_printf.h"

int	print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
