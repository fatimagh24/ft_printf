/*This function for print unsigned number*/

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb)
{
	int	c;

	c = 0;
	if (nb >= 10)
	{
		c += ft_putunsigned(nb / 10);
	}
	c += ft_putchar((nb % 10) + '0');
	return (c);
}
