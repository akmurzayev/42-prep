#include <unistd.h>

char ft_strncpy(char *dets, char *src, unsigned int n);

void ft_putchar(char c)
{
	write(1, &c, 1);

}


void ft_putstr(char *src)
{

	while(*src)
	{
		ft_putchar(*src);
		src++;
	} 
} 

int main(void)
{
	char hedef[50];
	char ana[]="Ben burada";
	char ar[]="\n==============================================\n";
	unsigned int n;
	n=10;

	ft_putstr(ar);
	ft_strncpy(hedef, ana,n);
	hedef[n]='\0';
	ft_putstr(hedef);
	
	return 0;
}
