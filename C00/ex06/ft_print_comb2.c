/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	write_comb2(int a, int b)
{
	ft_putchar('0' + (a / 10));  /* Bul yerde '0' nin degeri 48 bolany icin 48+0 dan baslayar */
	ft_putchar('0' + (a % 10));
	ft_putchar(' ');
	ft_putchar('0' + (b / 10));
	ft_putchar('0' + (b % 10));
	if (a <= 98)
	{
		ft_putchar(' ');
		ft_putchar(',');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_comb2(a, b);
			b++;
		}
		a++;
	}
}
