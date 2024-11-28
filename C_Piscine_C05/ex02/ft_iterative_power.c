/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:48:40 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/27 17:16:38 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num_def;

	num_def = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	i = 0;
	while (i < power)
	{
		num_def = num_def * nb;
		i++;
	}
	return (num_def);
}

/*
int main(void)
{
	printf("Solucion: %d", ft_iterative_power(5, 1));
}
*/
