/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:16:49 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/18 15:49:19 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		valor1;
	int		valor2;
	char	*digitos;

	digitos = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			valor1 = str[i] / 16;
			valor2 = str[i] % 16;
			write(1, &digitos[valor1], 1);
			write(1, &digitos[valor2], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
*/
