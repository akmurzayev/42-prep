#include <stdio.h>
#include <stdlib.h>
char     *ft_strjoin(int size, char **strs, char *sep);
int main()
{
    char *result;
    char *words1[] = {"Merhaba", "dunya", "nasilsin?"};
    char *separator1 = " ";
    int size1;
	size1 = 3;

    printf("Test 1: Normal kullanım\n");
    printf("Dizeler: {\"Merhaba\", \"dunya\", \"nasilsin?\"}\n");
    printf("Ayraç: \"%s\"\n", separator1);

    result = ft_strjoin(size1, words1, separator1);
    if (result) {
        printf("Sonuç: \"%s\"\n", result);
        free(result); // malloc ile ayrılan belleği serbest bırakmayı UNUTMA!
    } else {
        printf("Hata: Bellek ayrılamadı veya NULL döndürüldü.\n");
    }
    printf("------------------------------------\n\n");
	return (0);
}
