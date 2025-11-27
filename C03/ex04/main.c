#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[]="Merhaba dunyalar Gozeli";
	char to_find[]= "dunya";
	char *sonuc;
	
	sonuc = ft_strstr(str, to_find);
	printf("\"%s\" kelime icinde \"%s\" kelimesi bulundu", str,sonuc);
	
	return (0);

}
