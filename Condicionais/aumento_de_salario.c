#include <stdio.h>

int main()
{
    int codigo, percentual;
    float salarioAtual, novoSalario, valorAumento;

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    printf("Informe o valor de seu salario: ");
    scanf("%f", &salarioAtual);

    switch (codigo)
    {
    case 1:
        percentual = 40;

        valorAumento = ((salarioAtual * percentual) / 100);
        novoSalario = salarioAtual + valorAumento;

        printf("Seu cargo e: Servente\n");
        printf("Seu salario recebeu um percentual de aumento de: %d\n", percentual);
        printf("Valor do aumento R$%2.f\n", valorAumento);
        printf("Valor de seu Salario apos o aumento R$%2.f\n", novoSalario);
        break;

    case 2:
        percentual = 35;

        valorAumento = ((salarioAtual * percentual) / 100);
        novoSalario = salarioAtual + valorAumento;

        printf("Seu cargo e: Pedreiro\n");
        printf("Seu salario recebeu um percentual de aumento de: %d\n", percentual);
        printf("Valor do aumento R$%2.f\n", valorAumento);
        printf("Valor de seu Salario apos o aumento R$%2.f\n", novoSalario);
        break;

    case 3:
        percentual = 20;

        valorAumento = ((salarioAtual * percentual) / 100);
        novoSalario = salarioAtual + valorAumento;

        printf("Seu cargo e: Mestre de obras\n");
        printf("Seu salario recebeu um percentual de aumento de: %d\n", percentual);
        printf("Valor do aumento R$%2.f\n", valorAumento);
        printf("Valor de seu Salario apos o aumento R$%2.f\n", novoSalario);
        break;

    case 4:
        percentual = 10;

        valorAumento = ((salarioAtual * percentual) / 100);
        novoSalario = salarioAtual + valorAumento;

        printf("Seu cargo e: Tecnico de seguranca\n");
        printf("Seu salario recebeu um percentual de aumento de: %d\n", percentual);
        printf("Valor do aumento R$%2.f\n", valorAumento);
        printf("Valor de seu Salario apos o aumento R$%2.f\n", novoSalario);
        break;

    default:
        printf("Codigo nao cadastrado");
        break;
    }
}