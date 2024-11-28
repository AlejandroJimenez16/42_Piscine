/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:09:48 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/28 10:31:23 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[i] != (void *)0)
		{
			i++;
		}
		i--;
		while (argv[i] != (void *)0)
		{
			if (i > 0)
			{
				write(1, argv[i], ft_strlen(argv[i]));
				write(1, "\n", 1);
			}
			i--;
		}
		return (0);
	}
	return (1);
}
