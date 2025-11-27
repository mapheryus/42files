/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:59:06 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/25 18:12:18 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	i = 1;
	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		r = r * nb;
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(3, 4));
	return (0);
}*/
