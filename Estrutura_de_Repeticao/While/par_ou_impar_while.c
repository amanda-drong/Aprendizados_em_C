#include <stdio.h>

int main()
{
    int par, impar, numero;

    par = 0;
    impar = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        if (numero % 2 == 0)
        {
            printf("O numero e par\n");
            par++;
            printf("\nDigite um novo numero: ");
            scanf("%d", &numero);
        }
        else
        {
            printf("O numero e impar\n");
            impar++;
            printf("\nDigite um novo numero: ");
            scanf("%d", &numero);
        }
    }

    printf("\nTotal de numeros pares: %d\n", par);
    printf("Total de numeros impares: %d\n", impar);

    return 0;
}