#include <stdio.h>

int     ft_iterative_power(int base, int power);

int main(void)
{
	int	nb;
	int	nb1;
	int	sonuc;
	nb= 3;
	nb1=4;
	sonuc = ft_iterative_power(nb, nb1);
	printf("%d nin %d gezek carpimi = %d dir\n",nb, nb1, sonuc);
	return (0);
}
