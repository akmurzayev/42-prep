/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	g_len;

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	count;
	int	word;

	count = 0;
	i = 0;
	word = 1;
	while (str[i])
	{
		if (!(is_sep(str[i], sep)))
		{
			if (word == 1)
				count++;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, int *index, char *sep)
{
	int		i;
	char	*word;

	g_len = 0;
	i = *index;
	while (is_sep(str[i], sep))
		i++;
	*index = i;
	while (str[i] && !is_sep(str[i], sep))
	{
		i++;
		g_len++;
	}
	word = malloc((g_len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	word[g_len] = '\0';
	i = 0;
	while (str[*index] && !is_sep(str[*index], sep))
	{
		word[i] = str[*index];
		i++;
		(*index)++;
	}
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	int		index;
	int		wc;
	char	**word_arr;

	i = 0;
	index = 0;
	wc = word_count(str, sep);
	word_arr = malloc((wc + 1) * sizeof(char *));
	if (word_arr == NULL)
		return (NULL);
	word_arr[wc] = NULL;
	while (i < wc)
	{
		word_arr[i] = ft_strdup(str, &index, sep);
		i++;
	}
	return (word_arr);
}
