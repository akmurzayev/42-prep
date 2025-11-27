/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (base[i] != '\0' && (base[i] != '-' && base[i] != '+'))
	{
		c = base[i];
		j = i + 1;
		while (base[j] != '\0')
		{
			if (c == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_recursive(long nbr, char *base, int base_len)
{
	char	c;

	if (nbr >= base_len)
		ft_recursive(nbr / base_len, base, base_len);
	c = base[nbr % base_len];
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	long	nb;

	nb = nbr;
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return ;
	if (ft_check_base(base))
		return ;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	ft_recursive(nb, base, base_len);
}
