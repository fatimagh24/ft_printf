/* This function is a recreation of the original function "printf" ,
it works like the main 'printf' which is print and returns the number of the printed (digits, chars ,etc)*/

#include "ft_printf.h"

static int	ft_typecheck(char f, va_list arg)
{
	int	count;

	count = 0 ;
	if (f == 'd' || f == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (f == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (f == 'u')
		count += ft_putunsigned(va_arg(arg, unsigned int));
	else if (f == 'x')
		count += ft_puthex(va_arg(arg, unsigned int));
	else if (f == 'X')
		count += ft_puthex_upper(va_arg(arg, unsigned int));
	else if (f == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (f == 'p')
		count = ft_putptr(va_arg(arg, void *));
	else
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	arg;
	int		count;
	int		i;

	va_start(arg, f);
	i = 0;
	count = 0;
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			count += ft_typecheck(f[i], arg);
			i++;
		}
		else
		{
			count += ft_putchar(f[i]);
			i++;
		}
	}
	va_end(arg);
	return (count);
}
