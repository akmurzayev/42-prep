#include <string.h>
#include <stdio.h>

int     ft_strncmp(char *str1, char *str2, unsigned int size);

int main(void)
{
        char str1[]="Merhaba";
        char str2[]="merhaba";
        char str3[]="Merhaba";

        int sonuc;
        int sonuc2;

        sonuc=ft_strncmp(str1, str2, 6);
        sonuc2=ft_strncmp(str1,str3, 6);

        if (sonuc2 == 0)
        {
                printf("%s ve %s = Ikisi esitdir:", str1,str3);
        }
        else
                printf("%s ve %s = esit degildir", str1, str3);
        return (0);
}
