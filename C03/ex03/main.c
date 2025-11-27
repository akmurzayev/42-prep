#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[30]="Hello ";
	char src[]="World";
	ft_strncat(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}
