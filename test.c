#include <stdio.h>
#include <limits.h>
#include "incs/ft_printf.h"

int	main(void)
{
	char	*str;

	str = NULL;
	setvbuf (stdout, NULL, _IONBF, BUFSIZ);

	/* CHAR */
	printf("*********************CHAR************************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %c / ", 'b'));
	printf("%d\n\n", printf("   printf: %c / ", 'b'));
	
	/* STRINGS */
	printf("*********************STRINGS*********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %s / ", "bonjourvoilaletest"));
	printf("%d\n", printf("   printf: %s / ", "bonjourvoilaletest"));
	ft_printf("%d\n", ft_printf("ft_printf: %s / ", str));
	printf("%d\n\n", printf("   printf: %s / ", str));

	/* ADDRESSES */
	printf("*********************ADDRESS*********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %p / ", &str));
	printf("%d\n", printf("   printf: %p / ", &str));
	ft_printf("%d\n", ft_printf("ft_printf: %p / ", NULL));
	printf("%d\n\n", printf("   printf: %p / ", NULL));
	
	/* HEXA_MIN */
	printf("*********************HEXA_MIN********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %x / ", UINT_MAX));
	printf("%d\n", printf("   printf: %x / ", UINT_MAX));
	ft_printf("%d\n", ft_printf("ft_printf: %x / ", 0));
	printf("%d\n\n", printf("   printf: %x / ", 0));

	/* HEXA_MAX */
	printf("*********************HEXA_MAX********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %X / ", UINT_MAX));
	printf("%d\n", printf("   printf: %X / ", UINT_MAX));
	ft_printf("%d\n", ft_printf("ft_printf: %X / ", 0));
	printf("%d\n\n", printf("   printf: %X / ", 0));
	
	/* INT WITH "%d" */
	printf("*********************INT_D***********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %d / ", INT_MAX));
	printf("%d\n", printf("   printf: %d / ", INT_MAX));
	ft_printf("%d\n", ft_printf("ft_printf: %d / ", INT_MIN));
	printf("%d\n\n", printf("   printf: %d / ", INT_MIN));

	/* INT WITH "%i" */
	printf("*********************INT_I***********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %i / ", INT_MAX));
	printf("%d\n", printf("   printf: %i / ", INT_MAX));
	ft_printf("%d\n", ft_printf("ft_printf: %i / ", INT_MIN));
	printf("%d\n\n", printf("   printf: %i / ", INT_MIN));

	/* UNSIGNED INT */
	printf("*********************U_INT***********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %u / ", UINT_MAX));
	printf("%d\n", printf("   printf: %u / ", UINT_MAX));
	ft_printf("%d\n", ft_printf("ft_printf: %u / ", 0));
	printf("%d\n\n", printf("   printf: %u / ", 0));
	
	/* PRINT "%" */
	printf("*********************PERCENT*********************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %% / "));
	printf("%d\n\n", printf("   printf: %% / "));

	/* MISCELLANEOUS */
	printf("*********************MISCELLANEOUS***************************\n");
	ft_printf("%d\n", ft_printf("ft_printf: %%%%%%cd%%%p%d%%%% / ", &str, 42));
	printf("%d\n", printf("   printf: %%%%%%cd%%%p%d%%%% / ", &str, 42));
	ft_printf("%d\n", ft_printf("ft_printf: %%%d / ", 42));
	printf("%d\n", printf("   printf: %%%d / ", 42));
	ft_printf("%d\n", ft_printf("ft_printf: %s  / ", "%s"));
	printf("%d\n\n", printf("   printf: %s  / ", "%s"));

	return (0);
}
