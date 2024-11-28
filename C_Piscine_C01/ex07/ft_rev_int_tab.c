/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:54 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/11 16:53:55 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	temp2;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		temp2 = tab[size - 1 - i];
		tab[i] = temp2;
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
int main(void){
    int tab[] = {1,2,3,4,5,6,7};
    int size = 7;

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
}
*/
