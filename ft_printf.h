#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

# define HEXLOW	"0123456789abcdef"
# define HEXUPP	"0123456789ABCDEF"

int ft_printf(const char *str, ...);

#endif
