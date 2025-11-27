#include <stdio.h>
#include <unistd.h>

char ft_strupcase(char *str);

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
    
    
    
    
    
    char str[]="hata";
    char str1[]="";
    char str2[]="gaga";
    char str3[]="UllAkan";
    char str4[]="gahar";
    
    
    
    ft_putstr("\n===============================================\n");
    ft_putstr(str);
    ft_putstr("\n");
    ft_strupcase(str);
    ft_putstr(str);
    ft_putstr("\n===============================================\n");
    ft_putstr(str1);
    ft_putstr("\n");
    ft_strupcase(str1);
    ft_putstr(str1);
    ft_putstr("\n===============================================\n");
    ft_putstr(str2);
    ft_putstr("\n");
    ft_strupcase(str2);
    ft_putstr(str2);
    ft_putstr("\n===============================================\n");
    ft_putstr(str3);
    ft_putstr("\n");
    ft_strupcase(str3);
    ft_putstr(str3);
    ft_putstr("\n===============================================\n");
    ft_putstr(str4);
    ft_putstr("\n");
    ft_strupcase(str4);
    
    return 0;
}

