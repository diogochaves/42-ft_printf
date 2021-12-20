#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	len = 0;

	len = printf("--0--\n");
	printf("lenght: %d\n\n", len);
	len = ft_printf("--0--\n");
	printf("lenght: %d\n\n", len);

	len = printf("%%c: %c\n", 'a');
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%c: %c\n", 'a');
	printf("lenght: %d\n\n", len);


	len = printf("%%s: %s\n", "abc");
	printf("lenght: %d\n\n", len);
	len = ft_printf("%%s: %s\n", "abc");
	printf("lenght: %d\n\n", len);
	/*
	printf("%%p: %p\n", "a");
	printf("%%d: %d\n", -999);
	printf("%%i: %i\n", -999);
	printf("%%u: %u\n", 999);
	printf("%%x: %x\n", 999);
	printf("%%X: %X\n", 999);
	printf("%%%%: %%\n");
	printf("-----\n");
	*/
	return (0);
}
