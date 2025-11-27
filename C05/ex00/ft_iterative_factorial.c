/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:29:26 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/26 17:47:32 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb == 2)
		return (2);
	while ((nb - 1) > 1)
	{
		r = r * (nb - 1);
		nb--;
	}
	return (r);
}
/*
int	main(void)
{
	int	n = 10;

	ft_iterative_factorial(n);
	return (0);
}*/
