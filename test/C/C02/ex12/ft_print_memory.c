/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_addr(void *addr)
{
	int				i;
	char			buffer[16];
	char			*hex;
	char			c;
	unsigned long	adr;

	adr = (unsigned long) addr;
	i = 15;
	hex = "0123456789abcdef";
	while (i >= 0)
	{
		c = hex[adr % 16];
		buffer[i] = c;
		adr /= 16;
		i --;
	}
	write (1, buffer, 16);
	write (1, ": ", 2);
}

void	ft_print_hex(char *str, unsigned int size)
{
	unsigned int	i;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < 16)
	{
		if (i < size)
		{
			write (1, &hex[str[i] / 16], 1);
			write (1, &hex[str[i] % 16], 1);
		}
		else
			write (1, "  ", 2);
		if (i % 2 == 1)
			write (1, " ", 1);
		i++;
	}
}

int	ft_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_print_ascii(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] && ft_printable(str[i]))
			write (1, &str[i], 1);
		else
			write (1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				block;

	i = 0;
	while (i < size)
	{
		if (size - i < 16)
			block = size - i;
		else
			block = 16;
		ft_print_addr((unsigned char *)addr + i);
		ft_print_hex((unsigned char *)addr + i, block);
		ft_print_ascii((unsigned char *)addr + i, block);
		i += 16;
	}
	return (addr);
}
