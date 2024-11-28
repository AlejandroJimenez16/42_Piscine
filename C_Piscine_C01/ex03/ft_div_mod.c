/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:57:51 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/11 16:00:51 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void){
    int a = 5;
    int b = 2;

    int *divp;
    int *restP;

    int div;
    int rest;

    divp = &div;
    restP = &rest;

    ft_div_mod(a, b, divp, restP);

    printf("Resultado division: %d\n", div);
    printf("Resto: %d", rest);
}
*/
