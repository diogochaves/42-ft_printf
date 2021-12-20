#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		chr;
	char	*string;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			len++;
		}
		else
		{
			str++;
			if (*str == '%')
			{
				write(1, str, 1);
				len++;
			}
			else if (*str == 'c')
			{
				chr = va_arg(args, int);
				write(1, &chr, 1);
				len++;
			}
			else if (*str == 's')
			{
				string = va_arg(args, char *);
				write(1, string, ft_strlen(string));
				len += ft_strlen(string);
			}
		}
		str++;
	}
	va_end(args);
	return (len);
}
