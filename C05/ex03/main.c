#include <stdio.h>
int	ft_recursive_power(int nb, int power);

int main(void)
{
	int	nb;
	int	nb1;
	int	sonuc;
	
	nb = 2;
	nb1 = 5;
	sonuc = ft_recursive_power(nb, nb1);
	printf("%d nin %d gezek carpsan = %d bolyar\n",nb,nb1, sonuc);
	return (0);
}
