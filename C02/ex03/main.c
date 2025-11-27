#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

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
    
    
    
    
    
    char str[]="1230";
    char str1[]="";
    char str2[]="32g324";
    char str3[]="123";
    char str4[]="3435#";
    
    
    
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_numeric(str));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_numeric(str1));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_numeric(str2));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_numeric(str3));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_numeric(str4));
    
    return 0;
}

