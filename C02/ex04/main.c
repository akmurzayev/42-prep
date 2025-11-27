#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

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
    
    
    
    
    
    char str[]="GAYAR";
    char str1[]="";
    char str2[]="KAKILIK";
    char str3[]="123";
    char str4[]="MERhaba";
    
    
    
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_lowercase(str));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_lowercase(str1));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_lowercase(str2));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_lowercase(str3));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_lowercase(str4));
    
    return 0;
}
