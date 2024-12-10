#include <climits>

#include "ft_printf.h"

int main()
{
    int count;

    count = ft_printf("Integer: %d\n", 42);
    printf("Printed %d characters\n", count);
	long longValue = LONG_MAX;
    printf("Using standard printf: Address of longValue = %p\n", (void*)&longValue);
    ft_printf("Using ft_printf: Address of longValue = %p\n", (void*)&longValue);

    count = ft_printf("Unsigned: %u\n", 12345);
    printf("Printed %d characters\n", count);

    count = ft_printf("Hexadecimal: %x %X\n", 255, 255);
    printf("Printed %d characters\n", count);

    count = ft_printf("%c\n", "");
    printf("%s\n", "");
    return 0;
}