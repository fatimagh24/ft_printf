/*This function for print integer number*/

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c += ft_putchar('0');
		return (c);
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			c = ft_putstr("-2147483648");
			return (c);
		}
		c += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		c += ft_putnbr(n / 10);
	}
	c += ft_putchar((n % 10) + '0');
	return (c);
}
