/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*str1;

	i = 0;
	c1 = (unsigned char) c;
	str1 = (unsigned char *) str;
	while (i < n)
	{
		if (str1[i] == c1)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}
