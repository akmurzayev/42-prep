#include <stdio.h>
int ft_atoi_base(char *str, char *base);
int main(void)
{
	char str[]="1101";
	char str1[]="267";
	char base[]="01";
	char base1[]="0123456789abcdef";
	
	printf("%s : %s-lik sistemde = %d bolyar\n ", str, base, ft_atoi_base(str, base));
	printf("%s : %s-lik sistemde = %d bolyar\n ", str1, base1, ft_atoi_base(str1, base1));
}
