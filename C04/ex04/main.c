#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char base[]="0123456789abcdef";
	char base1[]="01";
	int nbr;
	int nbr1;
	nbr= 45;
	nbr1=15;
	ft_putnbr_base(nbr, base);
	printf("\n");
	ft_putnbr_base(nbr1, base1);
	return(0);
}
