/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:15:07 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 00:50:05 by dchaves-         ###   ########.fr       */
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
void	parse_char(char chr, int *len);
void	parse_string(char *str, int *len);
void	parse_int(int num, int *len);
void	parse_unsigned_int(unsigned int num, int *len);
void	parse_hex(unsigned long int num, char charcase, int *len);
void	parse_pointer(void *ptr, int *len);

#endif
