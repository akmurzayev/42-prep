#include <stdio.h>
int	ft_atoi(char *str);

int main(void) {
    // insert code here
    char str[]="782";
    char str1[]= "-890";
    int sonuc;

    sonuc = ft_atoi(str);
    printf("%d\n",sonuc);
    sonuc = ft_atoi(str1); 
    printf("%d\n",sonuc);
    
    
    
    return 0;
}

