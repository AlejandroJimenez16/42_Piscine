/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:34:52 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/26 18:17:48 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	count_hyphens(char *str)
{
	int	i;
	int	c;
	int	bool_sign;

	i = 0;
	c = 0;
	bool_sign = 0;
	while (str[i] != '\0' && bool_sign == 0)
	{
		if (str[i] == '-')
		{
			c++;
		}
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			bool_sign = 1;
		}
		i++;
	}
	return (c);
}

int	change_sign(char *temp_number, int c_hyphens)
{
	int	def_num;
	int	i;

	i = 0;
	def_num = 0;
	while (temp_number[i] != '\0')
	{
		def_num = def_num * 10 + (temp_number[i] - '0');
		i++;
	}
	if (!(c_hyphens % 2 == 0))
	{
		return (def_num * (-1));
	}
	return (def_num);
}

int	ft_atoi(char *str)
{
	int			i;
	int			j;
	int			c_hyphens;
	int			bool_number;
	static char	temp_number[25];

	i = 0;
	j = 0;
	bool_number = 0;
	c_hyphens = count_hyphens(str);
	while (str[i] != '\0' && bool_number == 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp_number[j] = str[i];
			j++;
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				bool_number = 1;
		}
		i++;
	}
	return (change_sign(temp_number, c_hyphens));
}
/*
int	main(void)
{
	char	*str;

	str = "--\n\b%++&-123ab--+12";
	printf("Num de menos: %d\n", count_hyphens(str));
	printf("El numero es: %d", ft_atoi(str));
}
*/
