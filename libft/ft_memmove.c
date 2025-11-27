/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_memmove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	size_t		x;
	char		*dest1;
	const char	*src1 = (const char *) src;

	i = 0;
	x = n - 1;
	dest1 = (char *) dest;
	if (dest1 > src1)
	{
		while (x + 1 > 0)
		{
			dest1[x] = src1[x];
			x--;
		}
	}
	else
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}
