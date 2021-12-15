#include "ft_printf.h"

t_fptr	dispatch(const char conv)
{
	int				index;
	static t_fptr	callback[] = {print_c, print_s, print_p, print_x, print_X,
								  print_i, print_i, print_ui, print_percent};

	index = ft_strchr(FORMAT_SPECIFIERS, conv) - FORMAT_SPECIFIERS;
	return (callback[index]);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			nprint_char;
	t_fptr		print_conv;

	nprint_char = 0;
	va_start(args, format);
	while (format && *format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{	
			format++;
			print_conv = dispatch(*format);
			nprint_char += (*print_conv)(args);
		}
		else
			nprint_char += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (nprint_char);
}
