/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recu_factorial.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:29:22 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/23 06:45:53 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i)
{
	char	c;
	if(i >= 10)
		ft_print(i / 10);
	c = (i % 10) + '0';
	write (1, &c, 1);
}

int	ft_fact(int v)
{
	int	s;

	if (v <= 1)
		s = 1;
	else
		s = v * ft_fact(v - 1);
	return (s);
}

void	dev_fact(char **argv)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while(argv[i])
	{
		j = 0;
		temp = 0;
		while (argv[i][j])
		{
			temp = temp * 10 + (argv[i][j] - '0');
			j++;
		}
		temp = ft_fact(temp); //Calcula el valor factorial
		ft_print(temp); //Imprime el valor factorial
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		write (1, "Se necesita pasar algún valor númerico mayor que 0.", 51);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				write (1, "Solo se aceptan valores númericos > 0.", 38);
			j++;
		}
		i++;
	}
	dev_fact(argv);
	return (0);
}
