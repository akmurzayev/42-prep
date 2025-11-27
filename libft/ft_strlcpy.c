/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t		i;
	int			src_size;
	char		*dest1;
	char const	*src1 = src;

	i = 0;
	dest1 = dest;
	src_size = 0;
	while (src1[src_size] != '\0')
		src_size++;
	if (n == 0)
		return (src_size);
	while (i < n - 1 && src1[i] != '\0')
	{
		dest1[i] = src1[i];
		i++;
	}
	dest1[i] = '\0';
	return (src_size);
}
