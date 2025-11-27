#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

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
    
    
    
    
    
    char str[]="1230 \n";
    char str1[]="";
    char str2[]="\n";
    char str3[]="123\n";
    char str4[]="3435#";
    
    
    
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_printable(str));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_printable(str1));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_printable(str2));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_printable(str3));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_printable(str4));
    
    return 0;
}


