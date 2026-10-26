#include <stdio.h>

int main()
{
    double num1, num2;
    int operation;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    printf("\nOperacoes disponiveis\n");
    printf("1 Soma - 2 Subtracao - 3 Multiplicacao - 4 Divisao\n");
    printf("Digite a operacao: ");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("Resultado: %.2f", num1 + num2);
        break;
    case 2:
        printf("Resultado: %.2f", num1 - num2);
        break;
    case 3:
        printf("Resultado: %.2f", num1 * num2);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Nao e possivel dividir por zero");
        }
        else
        {
            printf("Resultado: %.2f", num1 / num2);
        }
        break;
    default:
        printf("Operacao indisponivel");
        break;
    }

    return 0;
}