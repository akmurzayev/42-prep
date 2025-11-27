#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void) {
   
    int fact = 10;
    int sonuc;
    
    sonuc =ft_find_next_prime(fact);
    printf("%d : sonuc\n", sonuc);
    
    return 0;
}
