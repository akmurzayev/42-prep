#include <stdio.h>

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[15]="Merhaba ";
	char src[]="dunya! nasilsin napyosun?";
	
	printf("%s \\ bu oncesi\n", dest);
	ft_strlcat(dest, src, 15);
	printf("%s \\ bu sonrasi\n", dest);
	
	return (0);
}
