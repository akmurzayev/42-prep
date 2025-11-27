#include <stdio.h>

int	ft_is_prime(int nb);

int main (void)
{
	int i;
	int x;
	
	i = 10;
	x = 7;
	
	printf("%d : sonuc\n",ft_is_prime(i));
	printf("%d : asal\n",ft_is_prime(x));
	return (0);
}
