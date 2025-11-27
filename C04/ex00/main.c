#include <stdio.h>

int	ft_strlen(char *str);
int main(void) {
    // insert code here
    char str[]="Merhaba dunya!";
    int sonuc;
    
    sonuc = ft_strlen(str);
    
    printf("String uzunlugu: %d\n", sonuc);
    return 0;
}
