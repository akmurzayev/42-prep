#include <unistd.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod);
void	ft_putchar(char c);
void	ft_putnbr(int n);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if(n>9)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n%10+48);
}

int main(void) {
    
    int a;
    int b;
    int mod;
    int div;
    
    a=10;
    b=3;
    
    ft_div_mod(a, b, &div, &mod);
    ft_putnbr(div);
    ft_putchar('\n');
    ft_putnbr(mod);
    ft_putchar('\n');
   
    return 0;
}
