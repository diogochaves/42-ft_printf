#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int	var_sum(int quantity, ...)
{
	va_list	args;
	int	i;
	int sum;

	va_start(args, quantity);
	i = 0;
	sum = 0;
	while(i < quantity)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return sum;
}

int	main()
{
	int	sum;

	sum = var_sum(5,1,2,3,4,5);
	printf("%i\n", sum);
	return (0);
}
