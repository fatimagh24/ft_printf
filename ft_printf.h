
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

int	ft_printf(const char *f, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putunsigned(unsigned int nb);
int	ft_putptr(void *p);
#endif
