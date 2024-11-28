/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:24:09 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/24 19:00:04 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

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

/*
int main(void)
{
	char *s1 = "hola";
	char *s2 = "hol";

	int n = ft_strcmp(s1, s2);
	int n1 = strcmp(s1, s2);

	printf("Mi funcion: %d\n", n);
	printf("Original: %d", n1);
}
*/
