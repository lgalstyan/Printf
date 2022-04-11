/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:07:40 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/10 17:12:56 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	i;
	int len;

	len = 0;
	i = n;
	if (i < 0)
	{
		i = (i * -1);
		len += ft_putchar ('-');
	}
	if (i > 9)
	{
		len += ft_putnbr (i / 10);
		len += ft_putchar ((i % 10) + '0');
	}
	else
		len += ft_putchar (i + '0');
	return (len);
}/*
#include <stdio.h>
int main()
{
	ft_putnbr(1351);
//printf("ft")
}*/
