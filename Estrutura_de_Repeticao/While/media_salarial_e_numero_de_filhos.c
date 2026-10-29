#include <stdio.h>
int main()
{
    int filhos, numpessoas;
    float salario, somasalario, somafilhos, maiorsalario;

    numpessoas = 0;
    somafilhos = 0;
    somasalario = 0;
    maiorsalario = 0;

    printf("Informe o salario:\n");
    scanf("%f", &salario);

    while (salario != -1)
    {
        printf("Informe o numero de filhos:\n");
        scanf("%d", &filhos);
        numpessoas++;

        if (salario > maiorsalario)
            maiorsalario = salario;

        somafilhos += filhos;
        somasalario += salario;

        printf("\nInforme o salario:\n");
        scanf("%f", &salario);
    }
    printf("A media de salarios e R$ %.2f\n", somasalario / numpessoas);
    printf("A media de filhos e: %.2f\n", somafilhos / numpessoas);
    printf("O maior salario e R$%.2f\n", maiorsalario);

    return 0;
}