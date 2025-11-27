/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:48:07 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/25 19:08:39 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	r;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	r = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (r);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}*/
