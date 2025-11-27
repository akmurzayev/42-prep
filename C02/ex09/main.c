#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] =str[i] + 32;
		}
		i++;
	}
	return (str);
}

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str++, 1);
    }
}

void ft_putnbr(int tab)
{
    if(tab>9)
    {
        ft_putnbr(tab/10);
    }
    ft_putchar(tab%10+48);
}

int main(void) {
    
    
    
    
    
    char str[]="HATA KaKa";
    char str1[]="";
    char str2[]="GaGa mAga";
    char str3[]="UllAkan kici";
    char str4[]="gaHar gazap";
    
    
    
    ft_putstr("\n===============================================\n");
    ft_putstr(str);
    ft_putstr("\n");
    ft_strcapitalize(str);
    ft_putstr("\n===============================================\n");
    ft_putstr(str);
    ft_putstr("\n");
    ft_putstr("\n===============================================\n");
    ft_putstr(str2);
    ft_putstr("\n");
    ft_strcapitalize(str2);
    ft_putstr(str2);
    return 0;
}
