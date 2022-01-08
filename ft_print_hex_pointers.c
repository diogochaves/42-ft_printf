/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_pointers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:21:04 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 12:18:58 by dchaves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned long int num, char charcase, int *len)
{
	char	hex[64];
	int		size;

	size = 0;
	if (num == 0)
	{
		size = 1;
		hex[0] = HEXLOW[0];
	}
	while (num)
	{
		if (charcase == 'x')
			hex[size] = HEXLOW[num % 16];
		else
			hex[size] = HEXUPP[num % 16];
		num = num / 16;
		size++;
	}
	*len += size;
	while (size)
	{
		write(1, &hex[size - 1], 1);
		size--;
	}
}

void	print_pointer(long int ptr, int *len)
{
	if (ptr)
	{
		write(1, "0x", 2);
		*len += 2;
		print_hex(ptr, 'x', len);
	}
	else
	{
		write(1, "(nil)", 5);
		*len += 5;
	}
}
