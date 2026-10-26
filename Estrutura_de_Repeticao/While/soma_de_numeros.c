
#include <stdio.h>

int main() {
    int soma = 0;
    int valor;

    while (soma < 100) {
        printf("\nDigite um valor para somar: ");
        scanf("%d", &valor);

        soma = soma + valor;

        printf("\nSoma atual: %d", soma);

        if (soma == 100) {
            printf("\nA soma chegou a 100!");
        }
        else if (soma > 100) {
            printf("\nA soma ultrapassou 100!");
        }
        else {
            printf("\nA soma ainda nao chegou a 100.");
        }
    }

    return 0;
}
