/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:52:34 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/25 18:13:08 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	r = nb * (ft_recursive_factorial(nb - 1));
	return (r);
}
/*
int	main(void)
{
	printf("%d",ft_recursive_factorial(3));
	return (0);
}*/
