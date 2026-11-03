#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\n+-------------------+\n");
    printf("|    TABUADA DE %2d   |\n", num);
    printf("+-------------------+\n");

    for (i = 0; i <= 10; i++)
    {
        printf("|  %2d x %2d = %3d     |\n", num, i, num * i);
    }

    printf("+--------------------+\n");

    return 0;
}