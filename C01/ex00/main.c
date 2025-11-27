#include <unistd.h>

void ft_putnbr(int);
void ft_putchar(char c);
void	ft_ft(int	*nbr);

void	ft_putnbr(int n)
{
	if(n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + 48);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int n;
	
	ft_ft(&n);
	ft_putnbr(n);
	return 0;
}
