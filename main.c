/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchaves- <dchaves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:15:20 by dchaves-          #+#    #+#             */
/*   Updated: 2022/01/08 00:04:31 by dchaves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int		len = 0;
	char	*nulo;
	nulo = NULL;

	printf("\nORI: ");
	len = printf("--0--");
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("--0--");
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%%%: %%");
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%%%: %%");
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%c: %c", 'a');
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%c: %c", 'a');
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%s: %s", "abc");
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%s: %s", "abc");
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%s: %s", nulo);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%s: %s", nulo);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%d: %d", -999);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%d: %d", -999);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%i: %i", 123456789);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%i: %i", 123456789);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%u: %u", -999);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%u: %u", -999);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%x: %x", 999);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%x: %x", 999);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%X: %X", 999);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%X: %X", 999);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%x: %x", 0);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%x: %x", 0);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%x: %x", -2);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%x: %x", -2);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%x: %llx", 9223372036854775807LL);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%x: %x", 9223372036854775807LL);
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%p: %p", "a");
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%p: %p", "a");
	ft_printf(" | %d\n", len);

	printf("\nORI: ");
	len = printf("%%p: %p", &len);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%p: %p", &len);
	ft_printf(" | %d\n", len);

	void *void_ptr = NULL;
	printf("\nORI: ");
	len = printf("%%p: %p", void_ptr);
	printf(" | %d\n", len);
	ft_printf("FT.: ");
	len = ft_printf("%%p: %p", void_ptr);
	ft_printf(" | %d\n", len);

	printf("\n");

	return (0);
}
