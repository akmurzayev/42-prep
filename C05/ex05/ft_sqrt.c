/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_sqrt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int index;
	int i;

	i = nb;
	if (i <= 0)
		return (0);
	if (i == 1)
		return (1);
	index = 2;
	if (i >=2 )
	{
		while (index * index <= i)
		{
			if (index * index == i)
				return (index);
			index ++;
		}
	}
	return (0);
}
