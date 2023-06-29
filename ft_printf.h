#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *fmt, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_puthex(unsigned long n, char c);
int ft_putptr(unsigned long n);
int ft_putunsigned(unsigned int n);
int ft_putnbr(int n);

#endif