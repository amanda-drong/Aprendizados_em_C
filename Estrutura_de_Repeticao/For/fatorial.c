#include <stdio.h>

int main()
{
    int num, fatorial, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    fatorial = 1;

    for (i = 1; i <= num; i++)
        fatorial = fatorial * i;

    printf("O fatorial de %d e: %d", num, fatorial);

    return 0;
}