#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main(void) {
   
    int fact = 5;
    int sonuc;
    
    sonuc = ft_recursive_factorial(fact);
    printf("%d : sonuc\n", sonuc);
    
    return 0;
}
