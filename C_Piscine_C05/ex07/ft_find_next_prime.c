/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:13:05 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/28 18:25:24 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (0);
	}
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;
	int	i;

	i = 0;
	n = nb;
	while (i == 0)
	{
		n++;
		if (ft_is_prime(n) == 1)
		{
			break ;
		}
	}
	return (n);
}

/*
int main(void)
{
	printf("%d", ft_find_next_prime(6));
}
*/
