/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:51:52 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/17 14:53:00 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	n;

	n = 0;
	while (n < (size / 2))
	{
		s = tab[n];
		tab[n] = tab[size -1 - n];
		tab[size -1 - n] = s;
		n++;
	}
}
/*
int main (void)
{
	int	t[4];
	int *i;
	int	s;	

	s = 4;
	t[0] = 1;
	t[1] = 2;
	t[2] = 3;
	t[3] = 4;
	i = t;
	ft_rev_int_tab(i, s);
	return(0);
}
*/
