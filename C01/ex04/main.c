#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);
void    ft_putchar(char c);
void    ft_putnbr(int n);

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
   
    a=10;
    b=3;
    
    ft_ultimate_div_mod(&a, &b);
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);
    ft_putchar('\n');
   
    return 0;
}
