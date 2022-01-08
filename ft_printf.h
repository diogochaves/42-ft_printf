/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:15:07 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 12:17:16 by dchaves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

# define HEXLOW	"0123456789abcdef"
# define HEXUPP	"0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	parse_printf(const char *str, va_list args, int *len);
void	print_char(char chr, int *len);
void	print_string(char *str, int *len);
void	print_int(int num, int *len);
void	print_unsigned_int(unsigned int num, int *len);
void	print_hex(unsigned long int num, char charcase, int *len);
void	print_pointer(long int ptr, int *len);

#endif
