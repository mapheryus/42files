/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:13:56 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/12 16:56:21 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resultado;
	int	resto;

	resultado = (a / b);
	resto = (a % b);
	*div = resultado;
	*mod = resto;
}

/*
int main (void)
{
	int a;
	int b;
	int co;
	int re;

	a = 98;
	b = 3;
	ft_div_mod(a, b, &co, &re);
	printf("Valor a = %d, valor b = %d, a/b = %d, resto = %d", a, b, co, re);
	return (0);
}
*/
