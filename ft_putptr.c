#include "ft_printf.h"

int ft_putptr(unsigned long n)
{
    int i;

    i = 0; 
    if (!n)
    {
        i += ft_putstr("(nil)");
        return (i);
    }
    i += ft_putstr("0x");
    i += ft_puthex(n, 'x');
    return (i);
}