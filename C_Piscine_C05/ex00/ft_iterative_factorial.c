/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:58:27 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/27 11:59:02 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	num_def;
	int	num;

	num = nb;
	num_def = nb;
	if (nb <= 0)
	{
		return (0);
	}
	while (num > 0)
	{
		num--;
		if (num != 0)
		{
			num_def = num_def * (num);
		}
	}
	return (num_def);
}

/*
int main(void)
{
	int solution = ft_iterative_factorial(5);

	printf("Solucion: %d", solution);
}
*/
