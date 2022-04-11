#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int 	ft_puthex(unsigned long g, char c);
int 	ft_putunsig(unsigned long n);

#endif
