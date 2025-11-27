/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_substr.c     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t			len1;
	unsigned int	i;
	char			*s1;

	i = 0;
	len1 = ft_strlen(s);
	if (start >= len1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
