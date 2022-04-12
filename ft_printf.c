/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:20:06 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/12 16:43:59 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_st(char c)
{
	char	*st;

	st = "cspdiuxX%";
	while (*st++)
		if (*st == c)
			return (1);
	return (0);
}

static int	ft_check(char c, va_list *ap)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar (va_arg(*ap, int));
	else if (c == 's')
		i += ft_putstr (va_arg(*ap, char *));
	else if (c == 'p')
	{
		i += ft_putstr ("0x");
		i += ft_putp (va_arg(*ap, unsigned long));
	}
	else if (c == 'd')
		i += ft_putnbr (va_arg(*ap, int));
	else if (c == 'i')
		i += ft_putnbr (va_arg(*ap, int));
	else if (c == 'u')
		i += ft_putunsig (va_arg(*ap, unsigned int));
	else if (c == 'x')
		i += ft_puthex (va_arg(*ap, unsigned int), 'x');
	else if (c == 'X')
		i += ft_puthex (va_arg(*ap, unsigned int), 'X');
	else if (c == '%')
		i += ft_putchar ('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, str);
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_st (str[i]))
		{
			i++;
			len += ft_check (str[i], &ap);
		}
		else
		{
			len += ft_putchar (str[i]);
		}
		i++;
	}
	va_end(ap, str);
	return (len);
}
