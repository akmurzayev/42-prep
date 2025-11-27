/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_strlcat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	orgnl_dlen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	orgnl_dlen = dlen;
	if (n <= dlen)
		return (n + slen);
	if (n > dlen)
	{
		while (i < n - orgnl_dlen - 1 && src[i] != '\0')
		{
			dest[dlen] = src[i];
			i++;
			dlen++;
		}
		dest[dlen] = '\0';
	}
	return (slen + orgnl_dlen);
}
