/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:26:18 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:56 by alejandj         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_args(int argc, char *argv[], int i)
{
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	more_than_one_arg(int argc, char *argv[])
{
	int		i;
	char	*temp;
	int		ordenado;

	ordenado = 0;
	while (ordenado == 0)
	{
		ordenado = 1;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				ordenado = 0;
			}
			i++;
		}
	}
	print_args(argc, argv, i);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		more_than_one_arg(argc, argv);
		return (0);
	}
	return (1);
}
