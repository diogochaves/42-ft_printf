#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *str, ...)
{
	int	size;

	size = 0;
	while (str[size])
	{
		write(1, &str[size], 1);
		size++;
	}
	return (size);
}

int	main()
{
	int	size = 0;

	printf("--0--\n");
	size = ft_printf("--0--\n");
	printf("size: %d\n", size);
	/*
	printf("%%c: %c\n", 'a');
	printf("%%s: %s\n", "abc");
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
