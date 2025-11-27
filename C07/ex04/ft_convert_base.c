/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_convert_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (c == base[i])
			return (i);
	}
	return (-1);
}

int	ft_checkbase(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == ' ' || base[i] == '\n'
			|| ft_in_base(base[i], base + i + 1) >= 0
			|| (base[i] >= 7 && base[i] <= 13))
			return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base, int size)
{
	int	i;
	int	n;
	int	sign;

	while (*str == 32 || (*str >= 7 && *str <= 13))
		str++;
	n = 0;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		i = ft_in_base(*str, base);
		if (i < size && size >= 0)
			n = n * size + i;
		else
			break ;
		str++;
	}
	return (n * sign);
}

int	ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *str, char *base_from, char *base_to)
{
	char			*dest;
	int				i;
	int				n;
	int				size;
	unsigned int	nb;

	n = ft_checkbase(base_from);
	size = ft_checkbase(base_to);
	if (!(n && size))
		return (NULL);
	n = ft_atoi_base(str, base_from, n);
	nb = (n < 0) ? -n : n;
	i = ft_nbrlen(nb, size) + ((n < 0) ? 1 : 0);
	dest = malloc((i + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	return (dest);
}
