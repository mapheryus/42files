/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:37:14 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/25 20:17:56 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 7)
		return (1);
	while (i < (nb - 1))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	r;
	int	i;

	i = 2;
	r = nb;
	if (nb <= 2)
		return (2);
	while (i < (nb - 1))
	{
		if (nb % i == 0)
			while (!ft_is_prime(nb))
				nb++;
		r = nb;
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(4));
	return (0);
}*/
