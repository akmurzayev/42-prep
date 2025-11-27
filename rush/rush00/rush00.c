#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int y, int x)
{
    int i;
    int j;
    
    i = 0;
    while (i < y)
    {   
        j = 0;
        while (j < x)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == x-1)
            || (i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
                ft_putchar('o');
            else if (j == 0 || j == x - 1)
                ft_putchar('|');
            else if (i == 0 && j > 0 )
                ft_putchar('-');
            else if (i == y - 1 && j > 0 )
                ft_putchar('-');
            else 
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}


int main() {
    
    rush(1,1);
    return (0);

    return 0;
}
