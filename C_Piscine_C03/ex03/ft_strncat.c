/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:18:50 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/24 19:36:42 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	count_dest;

	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[count_dest] = src[i];
		count_dest++;
		i++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[] = "hola";
	char *str = "adios";

	int n = 3; 

	printf("%s", ft_strncat(dest, str, n));
}
*/
