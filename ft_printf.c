#include "ft_printf.h"

void	parse_printf(const char *str, va_list args, int *len);
void	parse_char(char chr, int *len);
void	parse_string(char *str, int *len);
void	parse_hex(int num, char charcase, int *len);
void	parse_pointer(char *ptr, int *len);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	parse_printf(str, args, &len);
	va_end(args);
	return (len);
}

void	parse_printf(const char *str, va_list args, int *len)
{
	while (*str)
	{
		if (*str != '%')
			parse_char(*str, len);
		else
		{
			str++;
			if (*str == '%')
				parse_char(*str, len);
			else if (*str == 'c')
				parse_char(va_arg(args, int), len);
			else if (*str == 's')
				parse_string(va_arg(args, char *), len);
			else if (*str == 'd' || *str == 'i')
				parse_string(ft_itoa(va_arg(args, int)), len);
			else if (*str == 'u')
				parse_string(ft_itoa((unsigned int)(va_arg(args, int))), len);
			else if (*str == 'x' || *str == 'X')
				parse_hex(va_arg(args, int), *str, len);
			else if (*str == 'p')
				parse_pointer(va_arg(args, char *), len);
		}
		str++;
	}
}

void	parse_char(char chr, int *len)
{
	write(1, &chr, 1);
	*len += 1;
}

void	parse_string(char *str, int *len)
{
	write(1, str, ft_strlen(str));
	*len += ft_strlen(str);
}

void	parse_hex(int num, char charcase, int *len)
{
	char	hex[64];
	int		size;

	size = 1;
	while (num)
	{
		if (charcase == 'x')
			hex[size-1] = HEXLOW[num % 16];
		else
			hex[size-1] = HEXUPP[num % 16];
		num = num / 16;
		size++;
	}
	*len += size - 1;
	while (size)
	{
		write(1, &hex[size-1], 1);
		size--;
	}
}

void	parse_pointer(char *ptr, int *len)
{
	write(1, ptr, ft_strlen(ptr));
	*len += ft_strlen(ptr);
}
