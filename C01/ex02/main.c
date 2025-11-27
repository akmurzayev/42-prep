#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_swap(int	*a, int	*b);

void ft_putnbr (int n)
{
	if(n>9)
	{
        	ft_putnbr(n/10);
    	}
    	ft_putchar(n%10+48);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
	int a;
	int b;
	
	a = 5;
	b = 42;

	ft_putnbr(a);
        ft_putchar(' '); 
        ft_putnbr(b);
	ft_swap(&a, &b);
	ft_putchar('\n');
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);

	return 0;
	
}
