/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:20:03 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 11:49:31 by dchaves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned int n)
{
	int	dig;

	dig = 1;
	while (n != 0)
	{
		n = n / 10;
		if (n != 0)
			dig++;
	}
	return (dig);
}

static char	*ft_uitoa(unsigned int n)
{
	int		dig;
	char	*num_str;

	dig = count_digits(n);
	num_str = malloc(sizeof(char) * (dig + 1));
	if (!num_str)
		return (0);
	num_str[dig] = '\0';
	while (dig)
	{
		num_str[dig - 1] = (n % 10) + '0';
		n /= 10;
		dig--;
	}
	return (num_str);
}

void	print_int(int num, int *len)
{
	char	*num_str;

	num_str = ft_itoa(num);
	print_string(num_str, len);
	free(num_str);
}

void	print_unsigned_int(unsigned int num, int *len)
{
	char	*num_str;

	num_str = ft_uitoa(num);
	print_string(num_str, len);
	free(num_str);
}
