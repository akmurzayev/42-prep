#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int main(void)
{
	char dest[]="Merhaba ";
	char src[]="Ali";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
