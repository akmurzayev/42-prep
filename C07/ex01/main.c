#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*sonuc;

	sonuc =ft_range(0,10);
	i = 0;
	if (sonuc)
	{
		while (i < 10)
		{
			printf("%d ", sonuc[i]);
			i++;	
		}
		printf("\n");
		free(sonuc);
		sonuc == NULL;
	}
	else
		printf("NULL dondu \n");
	return (0);
}
