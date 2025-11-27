#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main() {
  
  int a;
  
  a = 0;
  int *p = &a;
  int **pp = &p;
  int ***ppp = &pp;
  int ****pppp = &ppp;
  int *****ppppp = &pppp;
  int ******pppppp = &ppppp;
  int *******ppppppp = &pppppp;
  int ********nbr = &ppppppp;
  ft_ultimate_ft(&nbr);
  printf("%d ", a);
   
  
    return 0;
}
