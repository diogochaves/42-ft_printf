#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list	args;
	int	size;

	size = 0;
	va_start(args, str);
	while (str[size])
	{
		// va_arg(args, int);
		write(1, &str[size], 1);
		size++;
	}
	va_end(args);
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
