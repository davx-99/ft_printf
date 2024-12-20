/***********************************************************************
 *                                                                     *
 *                            D   A   V   X                            *
 *                                                                     *
 ***********************************************************************/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// functions usedeeeeeee
int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_hexa(unsigned long n, const char *base);
int	ft_putunsign(unsigned int n);

#endif
