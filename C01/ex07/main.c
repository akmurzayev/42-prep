#include <unistd.h>

void ft_putchar(char c); 
void ft_putstr(char *str);
void ft_rev_int_tab(int *tab, int size);

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str++, 1);
    }
}

void ft_putnbr(int tab)
{
    if(tab>9)
    {
        ft_putnbr(tab/10);
    }
    ft_putchar(tab%10+48);
}

int main(void) {
    
   
    int tab[]={5,4,3,2,1,0};
    int index;
    index=0;
    
    while(index<6)
    {
        ft_putnbr(tab[index]);
        if(index<5)
        {
            write(1, ", " ,2);
        }
        index++;
    }
    
    
    ft_rev_int_tab(tab, 6 );
    
    ft_putstr("\n===============================================\n");
    index=0;
    while(index<6)
    {
        ft_putnbr(tab[index]);
        if(index<5)
        {
            write(1, ", " ,2);
        }
        else
        {
            write(1,"\n",1);
        }
        index++;
    }
   
    return 0;
}
