#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *str1, char *str2);

int main(void)
{
	char str1[]="Merhaba";
	char str2[]="merhaba";
	char str3[]="Merhaba";
	
	int sonuc;
	int sonuc2;

	sonuc=ft_strcmp(str1, str2);
	sonuc2=ft_strcmp(str1,str3);
	
	if (sonuc2 == 0)
	{
		printf("%s ve %s = Ikisi esitdir:", str1,str3);
	}
	else 
		printf("%s ve %s = esit degildir", str1, str3);
	return (0);
}
