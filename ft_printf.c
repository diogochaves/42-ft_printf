/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:15:16 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 12:16:21 by dchaves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			print_char(*str, len);
		else
		{
			str++;
			if (*str == '%')
				print_char(*str, len);
			else if (*str == 'c')
				print_char(va_arg(args, int), len);
			else if (*str == 's')
				print_string(va_arg(args, char *), len);
			else if (*str == 'd' || *str == 'i')
				print_int(va_arg(args, int), len);
			else if (*str == 'u')
				print_unsigned_int((va_arg(args, unsigned int)), len);
			else if (*str == 'x' || *str == 'X')
				print_hex((va_arg(args, unsigned int)), *str, len);
			else if (*str == 'p')
				print_pointer(va_arg(args, long int), len);
		}
		str++;
	}
}
