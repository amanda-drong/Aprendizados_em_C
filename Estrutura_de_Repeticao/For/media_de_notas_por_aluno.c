
#include <stdio.h>

#define QUANT_ALUNOS 3
#define QUANT_NOTAS 4

int main()
{
    int aluno, i;
    float nota, soma_notas;

    aluno = 1;

    while (aluno <= QUANT_ALUNOS)
    {
        soma_notas = 0;

        printf("\nDigite as notas do aluno numero %d:\n", aluno);

        for (i = 1; i <= QUANT_NOTAS; i++)
        {
            printf("Digite a nota: ");
            scanf("%f", &nota);

            soma_notas += nota;
        }

        printf("Media do aluno: %.2f\n", soma_notas / QUANT_NOTAS);

        aluno++;
    }

    return 0;
}
