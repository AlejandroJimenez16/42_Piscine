/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:32:05 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/28 16:12:31 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	c;
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	c = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			c = i;
			return (c);
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
	printf("%d", ft_sqrt(25));
}
*/
