/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i ++;
	}
	return (-1);
}

int	ft_space(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	i = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
	{
		i++;
	}
	sign = 1;
	while (str[i] && str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	base_nb;
	int	base_length;

	i = 0;
	nb = 0;
	base_length = ft_check(base);
	if (base_length >= 2)
	{
		sign = ft_space(str, &i);
		base_nb = ft_base(str[i], base);
		while (base_nb != -1)
		{
			nb = (nb * base_length) + base_nb;
			i++;
			base_nb = ft_base(str[i], base);
		}
	}
	return (sign * nb);
}
