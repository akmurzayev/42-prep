/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_range.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc (sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
