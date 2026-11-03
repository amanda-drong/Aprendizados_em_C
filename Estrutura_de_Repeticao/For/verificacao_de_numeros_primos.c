
#include <stdio.h>

int main()
{
    int numero, cont, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 1)
    {
        cont = 0;

        if (numero < 2)
        {
            printf("O numero %d nao e primo\n", numero);
        }
        else
        {
            for (i = 2; i * i <= numero; i++)
            {
                if (numero % i == 0)
                {
                    cont++;
                    break;
                }
            }

            if (cont == 0)
            {
                printf("O numero %d e primo\n", numero);
            }
            else
            {
                printf("O numero %d nao e primo\n", numero);
            }
        }

        printf("\nDigite um numero: ");
        scanf("%d", &numero);
    }

    return 0;
}
