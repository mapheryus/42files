/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:58:14 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/17 14:38:32 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	c;
	int	r;

	c = *a / *b;
	r = *a % *b;
	*a = c;
	*b = r;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 20;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}*/
