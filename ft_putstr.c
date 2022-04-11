/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:29:29 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/10 16:58:05 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
/*
int	ft_putstr(char *s)
{
	int	i;

	i = 0; 
	if(!s)
	{	//s = "(null)";
	write(1, "(null)", 6);
	return(6);
	}
	while(s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
*/
static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	if(s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen (s));
	return (ft_strlen(s));
}
