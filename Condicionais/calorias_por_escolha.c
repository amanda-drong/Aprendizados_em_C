#include <stdio.h>

int main()
{
    int calTotal, calBebida, calPrato;
    int prato, bebida;

    calPrato = 0;
    printf("\nPratos do dia\n");
    printf("- 1 Italiano - 2 Japones - 3 Salvadorenho - \n");
    printf(" \nInforme o numero do prato desejado: ");
    scanf("%d", &prato);

    switch (prato)
    {
    case 1:
        calPrato = calPrato + 750;
        printf("Total de calorias: %d\n", calPrato);
        break;

    case 2:
        calPrato = calPrato + 324;
        printf("Total de calorias: %d\n", calPrato);
        break;

    case 3:
        calPrato = calPrato + 545;
        printf("Total de calorias: %d\n", calPrato);
        break;
    default:
        printf("Item nao identificado");
        break;
    }

    ////// Sessão de Bebidas ///////

    calBebida = 0;
    printf("\nBebidas do dia\n");
    printf("- 1 Cha - 2 Suco de Lavanja - 2 Refrigerante - \n");
    printf(" \nInforme o numero da bebida desejada: ");
    scanf("%d", &bebida);

    switch (bebida)
    {
    case 1:
        calBebida = calBebida + 30;
        printf("Total de calorias: %d\n", calBebida);
        break;

    case 2:
        calBebida = calBebida + 80;
        printf("Total de calorias: %d\n", calBebida);
        break;

    case 3:
        calBebida = calBebida + 90;
        printf("Total de calorias: %d\n", calBebida);
        break;

    default:
        printf("Item nao identificado");
        break;
    }

    calTotal = calPrato + calBebida;

    printf(" \nNumero do prato e bebida escolhida: %d %d\n", prato, bebida);
    printf("Total de calorias: %d\n", calTotal);

    return 0;
}
