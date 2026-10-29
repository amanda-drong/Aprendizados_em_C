#include <stdio.h>

int main()
{
    int idade, numpessoa;
    float altura, somaidade, somaaltura;

    numpessoa = 0;
    somaidade = 0;
    somaaltura = 0;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    while (idade != 0)
    {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        numpessoa++;

        somaaltura += altura;
        somaidade += idade;

        printf("\nDigite a idade: ");
        scanf("%d", &idade);
    }

    printf("\nA media da altura e: %.2f", somaaltura / numpessoa);
    printf("\nA media da idade e: %.0f", somaidade / numpessoa);

    return 0;
}