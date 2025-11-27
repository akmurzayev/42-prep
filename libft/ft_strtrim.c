/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_strtrim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		len;
	size_t		finish;
	char		*word;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (ft_isinset(s1[start], set))
		start++;
	finish = len - 1;
	while (ft_isinset(s1[finish], set))
		finish--;
	if (start == len)
		return (ft_strdup(""));
	word = malloc((finish - start + 2) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, (s1 + start), (finish - start + 2));
	return (word);
}
