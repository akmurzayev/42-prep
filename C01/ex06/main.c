#include <unistd.h>
int	ft_strlen(char *str);
void	ft_putstr(char *str);
void    ft_putchar(char c);


void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_putnbr(int c)
{
	if(c>9)
	{
		ft_putnbr(c/10);
	}
	ft_putchar(c%10+48);
}

int main(void) {
    
   
    char str[]="42";
    int length;

    
   length= ft_strlen(str);
   ft_putnbr(length);
    return 0;
}
