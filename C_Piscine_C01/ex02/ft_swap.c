/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:05:17 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/11 16:05:19 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
    int a = 1;
    int b = 2;

    int *ap;
    int *bp;

    ap = &a;
    bp = &b;

    ft_swap(ap, bp);

    printf("%d\n", a);
    printf("%d\n", b);
}
*/
