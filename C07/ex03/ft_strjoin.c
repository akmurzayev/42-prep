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

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	char	*org_dest = dest;
	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (org_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*result;
	int	total_size;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (!result)
		{
			return (NULL);
		}
		result[0] = '\0';
		return (result); 
	}
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total_size += ft_strlen(sep) * (size-1);
	total_size += 1;
	result = (char *)malloc(total_size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size-1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
