#include <stdio.h>

int main()
{
    int numnotas, aprovados, reprovados, codaluno, i;
    float soma, nota, media;

    aprovados = 0;
    reprovados = 0;

    printf("\nDigite o numero de notas da diciplina: ");
    scanf("%d", &numnotas);

    do
    {
        printf("\nDigite o codigo do aluno: ");
        scanf("%d", &codaluno);

        soma = 0;

        if (codaluno != 0)
        {
            for (i = 1; i <= numnotas; i++)
            {
                printf("Digite a nota obtida: ");
                scanf("%f", &nota);
                soma = soma + nota;
            }

            media = soma / numnotas;

            if (media >= 6)
                aprovados++;
            else
                reprovados++;
        }
    } while (codaluno != 0);

    printf("\nNumeros de alunos aprovados: %d\n", aprovados);
    printf("Numeros de alunos reprovados: %d\n", reprovados);

    return 0;
}