#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str, char *sep);

int main(void) {
    
    char *str="Merhaba Dunya Naber";
    char *sep=" ";
    char **soz;
    int i;
    i=0;
    soz= ft_split(str, sep);
    if (soz == NULL)
        return (1);
    
    printf("\"%s\": Ayrac\n",sep);
    printf("\"%s\": Sozlem\n",str);
    while (soz[i] != NULL)
    {
        printf("%d : Kelime - %s \n", i+1,soz[i]);
        i++;
	}
	i = 0;
    	while (soz[i] != NULL)
	{
		free(soz[i]);
		soz[i] = NULL;
		i++;
	}
	free(soz);
	soz = NULL;
    
    return 0;
}
