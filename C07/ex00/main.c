#include <stdio.h>

char	*ft_strdup(char *src);

int main(void)
{
	char *original= "Merhaba bu string";
	char *dup;
	
	dup = ft_strdup(original);
	
	printf("%s\n",dup);
	free(dup);
	dup = NULL;
	return (0);
}
