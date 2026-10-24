#include <stdio.h>

int main()
{
    double peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%lf", &peso);

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        printf("Seu IMC e %.2f. Voce esta abaixo do peso.", imc);
    }
    else if (imc < 25)
    {
        printf("Seu IMC e %.2f. Voce esta com peso normal.", imc);
    }
    else if (imc < 30)
    {
        printf("Seu IMC e %.2f. Voce esta com sobrepeso.", imc);
    }
    else
    {
        printf("Seu IMC e %.2f. Voce esta com obesidade.", imc);
    }
    return 0;
}