#include "ft_printf.h"

int ft_puthex(unsigned long n, char c)
{
    char    *lc;
    char    *uc;
    int     count;

    lc = "0123456789abcdef";
    uc = "0123456789ABCDEF";
    count = 0;
    if (n >= 16)
    {
        count += ft_puthex(n/16, c);
        count += ft_puthex(n%16, c);
    }
    else if (n < 16)
    {
        if (c == 'x')
                count += ft_putchar(lc[n]);
        else if (c == 'X')
                count += ft_putchar(uc[n]);                
    }
    return (count);
}