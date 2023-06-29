# include "ft_printf.h"

int ft_putunsigned(unsigned int n)
{
    int i;

    i = 0;
    if (n >= 10)
        i += ft_putunsigned(n / 10);
    i += ft_putchar(n % 10 + '0');
    return (i);        
}