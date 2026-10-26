#include <stdio.h>

int main()
{
    char nome[30];
    int i;

    printf("Informe seu nome:");
    scanf("%s", nome);

    i = 1;

    do
    {
        printf("%d - %s\n", i, nome);
        i++;
    } while (i != 11);

    return 0;
}