#include <unistd.h>

char	ft_strlowcase(char *str);

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
    
    
    
    
    
    char str[]="HATA";
    char str1[]="";
    char str2[]="GaGa";
    char str3[]="UllAkan";
    char str4[]="gaHar";
    
    
    
    ft_putstr("\n===============================================\n");
    ft_putstr(str);
    ft_putstr("\n");
    ft_strlowcase(str);
    ft_putstr(str);
    ft_putstr("\n===============================================\n");
    ft_putstr(str1);
    ft_putstr("\n");
    ft_strlowcase(str1);
    ft_putstr(str1);
    ft_putstr("\n===============================================\n");
    ft_putstr(str2);
    ft_putstr("\n");
    ft_strlowcase(str2);
    ft_putstr(str2);
    ft_putstr("\n===============================================\n");
    ft_putstr(str3);
    ft_putstr("\n");
    ft_strlowcase(str3);
    ft_putstr(str3);
    ft_putstr("\n===============================================\n");
    ft_putstr(str4);
    ft_putstr("\n");
    ft_strlowcase(str4);
    

    return 0;
}
