/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_rev_params.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
	write (1, "\n", 1);
}

int	main(int argc, char	*argv[])
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i--]);
	}
	return (0);
}
