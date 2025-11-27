/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_print_reverse_alphabet.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 26;
	c = 'z';
	while (i > 0)
	{
		write(1, &c, 1);
		c--;
		i--;
	}
}
