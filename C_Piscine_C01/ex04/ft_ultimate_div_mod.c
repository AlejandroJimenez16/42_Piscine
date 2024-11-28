/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:06:12 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/11 16:14:55 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
int main(void){
    int a = 7;
    int b = 3;

    int *ap;
    int *bp;

    ap = &a;
    bp = &b;

    ft_ultimate_div_mod(ap, bp);

    printf("Resultado div: %d\n", a);
    printf("Resto: %d", b);
}
*/
