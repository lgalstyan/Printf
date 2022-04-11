/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:08:45 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/10 17:08:07 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(unsigned long h, char c)
{
	int l;

	l = 0;
	if(h > 15)
		l += ft_puthex(h / 16, c);
	h = h % 16;
	if (h > 9 && (c == 'x' || c == 'p'))
		l += ft_putchar (h + 87);
	else if (h > 9 && c == 'X')
		l += ft_putchar (h + 55);
	else if (h <= 9)
		l += ft_putchar(h + 48);
	return (l);
}/*
#include <stdio.h>
int main()
{
	int i = ft_puthex(674, 'p');
	printf("%d", i);
}*/
