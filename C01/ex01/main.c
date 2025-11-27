#include <unistd.h>

void	ft_ultimate_ft(int	*********nbr);
void	ft_putchar(char	c);
void	ft_putnbr(int	nbr);

void ft_putnbr(int nbr)
{
	if(nbr > 9)
	{
		ft_putnbr(nbr/10);
	}
	ft_putchar(nbr % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int nbr;
	int *ptr1 = &nbr;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	
	ft_ultimate_ft(&ptr8);
	ft_putnbr(nbr);
	return 0;
}
