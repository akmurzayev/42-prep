#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str);

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
    
    
    
    
    
    char str[]="GAYRAT";
    char str1[]="";
    char str2[]="GAGA";
    char str3[]="buha";
    char str4[]="mi123#";
    
    
    
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_uppercase(str));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_uppercase(str1));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_uppercase(str2));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_uppercase(str3));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_uppercase(str4));
    
    return 0;
}
