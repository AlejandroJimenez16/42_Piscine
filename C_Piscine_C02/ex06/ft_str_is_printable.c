/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:22:15 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/18 11:37:10 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
	printf("%d\n", ft_str_is_printable(" !#$%&'()*+,-./:;<=>?@[/]^_`{|}~"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("þø↓ħav&"));

}
*/
