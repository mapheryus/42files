/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:09:46 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/13 14:38:48 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

/*
int main (void)
{
	int	o1;
	int	o2;
	
	o1 = 1;
	o2= 3;
	printf("El valor 1 es: %d, el valor 2 es: %d\n", o1 ,o2);
	ft_swap(&o1, &o2);
	printf("El nuevo valor 1 es: %d, el nuevo valor 2 es: %d", o1, o2);
	return (0);
}
*/
