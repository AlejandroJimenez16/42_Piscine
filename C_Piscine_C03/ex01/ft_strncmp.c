/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:12:04 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/24 19:29:13 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
int main(void)
{
	char *s1 = "h";
	char *s2 = "ho";

	int n = 2;

	int n1 = ft_strncmp(s1, s2, n);
	int n2 = strncmp(s1, s2, n);

	printf("Mi funcion: %d\n", n1);
	printf("Original: %d", n2);
}
*/
