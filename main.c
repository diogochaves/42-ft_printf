#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	len = 0;

	len = printf("--0--\n");
	printf("lenght: %d\n\n", len);
	len = ft_printf("--0--\n");
	printf("lenght: %d\n\n", len);

	len = printf("%%%%: %%\n");
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%%%: %%\n");
	printf("lenght: %d\n\n", len);

	len = printf("%%c: %c\n", 'a');
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%c: %c\n", 'a');
	printf("lenght: %d\n\n", len);

	len = printf("%%s: %s\n", "abc");
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%s: %s\n", "abc");
	printf("lenght: %d\n\n", len);

	len = printf("%%d: %d\n", -999);
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%d: %d\n", -999);
	printf("lenght: %d\n\n", len);

	len = printf("%%i: %i\n", 123456789);
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%i: %i\n", 123456789);
	printf("lenght: %d\n\n", len);

	len = printf("%%u: %u\n", -999);
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%u: %u\n", -999);
	printf("lenght: %d\n\n", len);

	len = printf("%%x: %x\n", 999);
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%x: %x\n", 999);
	printf("lenght: %d\n\n", len);

	len = printf("%%X: %X\n", 999);
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%X: %X\n", 999);
	printf("lenght: %d\n\n", len);

	len = printf("%%p: %p\n", "a");
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%p: %p\n", "a");
	printf("lenght: %d\n\n", len);

	printf("-----\n");

	return (0);
}
