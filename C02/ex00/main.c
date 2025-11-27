#include <unistd.h>

char ft_strcpy(char *dest, char *src);

void ft_putchar(char c)
{
	write(1, &c,1);
}

void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
}

int main(void)
{
	char str1[]="\n==============================\n";
	char str[]="Hello";
	char dest[15];
	char dest1[15];
	char str2[]="Merhaba\n\0";
	
	
	ft_putstr(str1);
	ft_strcpy(dest, str);
	ft_putstr(str);
	ft_putstr(str1);
	ft_putstr(dest);
	 return 0;
}
