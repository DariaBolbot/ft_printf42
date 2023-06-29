# include "ft_printf.h"

static int  ft_convert(va_list args, char c)
{
    if (!args)
        return (0);
    if (c == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (c == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (c == 'x' || c == 'X')
        return (ft_puthex(va_arg(args, unsigned int)));
    else if (c == 'd' || c == 'i')
        return (ft_putnbr(va_arg(args, int)));
    else if (c == 'u')
        return (ft_putunsigned(va_arg(args, unsigned int)));      
    else if (c == 'p')
        return (ft_putptr(va_arg(args, unsigned long)));
    else if (c == '%')
        return (ft_putchar('%'));  
    return (0);                        
} 

int ft_printf(const char *fmt, ...)
{
    va_list args;
    int     i;
    int     count;

    i = 0;
    count = 0;
    va_start(args, fmt);
    while (fmt[i])
    {
        if (fmt[i] == '%')
        {
            count += ft_convert(args, fmt[i+1]);
            i++;
        }
        else 
        {
            ft_putchar(fmt[i]);
            count++;
        }
        i++;
    }
    va_end(args);
    return (count);
}