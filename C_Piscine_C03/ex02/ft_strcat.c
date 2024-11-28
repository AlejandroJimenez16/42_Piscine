/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:07:07 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/24 19:31:55 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count_dest;

	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	i = 0;
	while (src[i] != '\0')
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
	char dest[100] = "hola";
	char *str = "adios";

	printf("%s", ft_strcat(dest, str));
}
*/
