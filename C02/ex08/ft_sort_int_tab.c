/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:41:01 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/17 14:57:37 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *t, int size)
{
	int	i;
	int	temp;
	int	fin;

	fin = 0;
	while (fin != 1)
	{
		fin = 1;
		i = 0;
		while (i < (size - 1))
		{
			if (t[i] > t[i + 1])
			{
				temp = t[i];
				t[i] = t[i + 1];
				t[i + 1] = temp;
				fin = 0;
			}
			i++;
		}
	}
}
/*
int	main(void)
{
	int	size;
	int	*tab;
	int	n[4] = {4,2,1,5};

	size = 4;
	tab = n;
	ft_sort_int_tab(tab, size);
	return (0);
}*/
