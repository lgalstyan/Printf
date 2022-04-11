/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:18:19 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/10 16:46:28 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsig(unsigned long n)
{
	unsigned long	res;
	int	m;

	m = 0;
	res = 10;
	if(n < 10)
	{
		m += ft_putchar (n + 48);
		return (m);
	}
	while(n > 0)
	{
		res += n % 10;
		res *= 10;
		n /= 10;
	}
	res /= 10;
	while(res > 1)
	{
		m += ft_putchar ((res % 10) + 48);
		res /=10;
	}
	return (m);
}
