/*This function for print pointer address in hexadecimal */

#include "ft_printf.h"

static int	ft_hex(unsigned long nb)
{
	char			*h;
	char			hex[17];
	int				c;
	int				i;

	c = 0;
	i = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	h = "0123456789abcdef";
	while (nb > 0)
	{
		hex[i] = h[nb % 16];
		nb /= 16;
		i++;
	}
	hex[i] = '\0';
	while (--i >= 0)
		c += ft_putchar(hex[i]);
	return (c);
}

int	ft_putptr(void *p)
{
	int				c;
	unsigned long	np;

	np = (unsigned long)p;
	c = 0;
	if (np)
	{
		c += ft_putstr("0x");
		c += ft_hex(np);
	}
	else
		c += ft_putstr("(nil)");
	return (c);
}
