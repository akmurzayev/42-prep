#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int ft_str_is_alpha(char *str);

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str++, 1);
    }
}

int main(void) {
    
    
    
    
    
    char str[]="MerhabaDunya";
    char str1[]="";
    char str2[]=" ";
    char str3[]="123";
    char str4[]="Merhaba Dunya";
    
    
    
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_alpha(str));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_alpha(str1));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_alpha(str2));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_alpha(str3));
    ft_putstr("\n===============================================\n");
    printf("%d\n",ft_str_is_alpha(str4));
    
    return 0;
}
