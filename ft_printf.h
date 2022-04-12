/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:37:17 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/12 13:57:44 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_puthex(unsigned long g, char c);
int	ft_putunsig(unsigned long n);
int	ft_putp(unsigned long a);
#endif
