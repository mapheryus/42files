/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:33:54 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/27 11:44:54 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * ((max - min)));
	if (!range)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = [i];
		i++;
	}
	return (range);
}
