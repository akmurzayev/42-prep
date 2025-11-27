/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strjoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	word = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (s1[i] != '\0')
	{
		word[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		word[i] = s2[j];
		i++;
		j++;
	}
	word[i] = '\0';
	return (word);
}
