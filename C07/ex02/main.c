#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	range_size;
	int	*my_array;

	range_size = ft_ultimate_range(&my_array, 0, 10);
	for(int i=0; i < range_size; i++)
	{
		printf("%d ", my_array[i]);
	}
	return (0);
}

