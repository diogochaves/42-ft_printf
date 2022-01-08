/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strings.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:19:21 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 11:49:39 by dchaves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(char chr, int *len)
{
	write(1, &chr, 1);
	*len += 1;
}

void	print_string(char *str, int *len)
{
	if (str)
	{
		write(1, str, ft_strlen(str));
		*len += ft_strlen(str);
	}
	else
	{
		write(1, "(null)", 6);
		*len += 6;
	}
}
