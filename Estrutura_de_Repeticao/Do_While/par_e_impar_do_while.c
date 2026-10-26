#include <stdio.h>

int main()
{
    int par, impar, numero;

    par = 0;
    impar = 0;

    do
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            printf("O numero e par\n");
            par++;
        }
        else
        {
            printf("O numero e impar\n");
            impar++;
        }
    } while (numero != 0);

    printf("\nTotal de numeros pares: %d\n", par);
    printf("Total de numeros impares: %d\n", impar);

    return 0;
}