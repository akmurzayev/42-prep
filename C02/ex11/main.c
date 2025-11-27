#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char source[]="Coucou \ntu vasbien?";
	ft_putstr_non_printable(source);
	return (0);
}
