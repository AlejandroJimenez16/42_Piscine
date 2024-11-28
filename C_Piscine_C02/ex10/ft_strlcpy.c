/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:34:34 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/18 12:05:38 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

//size -1 para que '\0' quepa en el buffer

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
int	main(void)
{
	char	*src;
	int		size;
	char	dest[10];
	int		tot_size;

	src = "holaa";
	size = 3;
	tot_size = ft_strlcpy(dest, src, size);
	printf("Tamaño de src: %d\n", tot_size);
	printf("Cadena de destino: %s", dest);
}
*/
