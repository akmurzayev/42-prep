#include <stdio.h>
#include <stdlib.h>

char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void) {
    
    char *sonuc;
    
    sonuc = ft_convert_base("3A", "0123456789ABCDEF", "01");
    printf("%s\n", sonuc);
    free (sonuc); 
	sonuc = NULL;
   
    
    
    return 0;
}
