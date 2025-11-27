#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char source[] = "Merhaba";
	char dest[5];
	
	printf ("%s\n",source);
	printf("==========================\n");
	
	unsigned int ft_result= ft_strlcpy(dest, source, sizeof(dest));
	printf("ft_result: %u\n", ft_result);
	printf("dest: %s\n", dest);
	printf("==========================\n");
	if (ft_result >= sizeof(dest))
	{
		printf ("Sorry not done");
	}
	else
		printf ("Done");

	return (0);
}
