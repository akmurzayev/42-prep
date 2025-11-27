#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	int size;

	size = 6;
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size ; i++)
	{
		printf("%d ",tab[i]);
	}
	return (0);
}
