/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:54:33 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/11 17:06:20 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	ordenado;

	ordenado = 0;
	while (ordenado == 0)
	{
		ordenado = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				ordenado = 0;
			}
			i++;
		}
	}
}

/*
int main(void){

    int tab[] = {3, 5, 2, 7};
    int size = 4;

    ft_sort_int_tab(tab, size);

    for(int i=0; i<size; i++){
        printf("%d", tab[i]);
    }
}
*/
