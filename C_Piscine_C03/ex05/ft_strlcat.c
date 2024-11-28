/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:51:07 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/25 11:23:57 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count_dest;
	unsigned int	i;
	unsigned int	origin_size_dest;
	unsigned int	origin_size_src;

	origin_size_dest = ft_strlen(dest);
	origin_size_src = ft_strlen(src);
	count_dest = ft_strlen(dest);
	if (size <= origin_size_dest)
	{
		return (size + origin_size_src);
	}
	i = 0;
	while (i < size - origin_size_dest - 1 && src[i] != '\0')
	{
		dest[count_dest] = src[i];
		count_dest++;
		i++;
	}
	dest[count_dest] = '\0';
	return (origin_size_dest + origin_size_src);
}
/*
int main(void)
{
	char dest[15] = "Hola";
	char *src = " Mundo";
	
	int result = ft_strlcat(dest, src, 8);
	
	printf("Mi version: %d\n", result);

	printf("Destino: %s", dest);
	
}
*/
