/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* ft_itoa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int i, long int j)
{
	s[i + j] = '\0';
	while (i >= j)
	{
		s[i--] = '0' + (number % 10);
		number /= 10;
	}
	if (j == 1)
		s[0] = '-';

	return (s);
}

static int	ft_countlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				j;
	int				bas;
	char			*count;
	unsigned int	num;

	j = 0;
	bas = ft_countlen(n);
	if (n < 0)
	{
		j = 1;
		num = -n;
	}
	else
		num = n;
	count = malloc((bas + j + 1) * sizeof(char));
	if (!count)
		return (NULL);
	if (n == 0)
	{
		count[0] = '0';
		count[1] = '\0';
		return (count);
	}
	count = ft_char(count, num, bas + j - 1, j);
	return (count);
}
