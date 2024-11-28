/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:23:30 by alejandj          #+#    #+#             */
/*   Updated: 2024/11/11 13:03:32 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		contador;

	c = 'z';
	contador = 0;
	while (contador <= 25)
	{
		write(1, &c, 1);
		c--;
		contador ++;
	}
}

/*
int main(void)
{
	ft_print_reverse_alphabet();
}
*/
