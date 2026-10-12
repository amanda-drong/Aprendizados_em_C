#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numero;

	printf("Digite um numero: ");
	scanf("%f", &numero);

	if (numero > 1 && numero < 10)
	{
		printf("Numero entre 1 e 10");
	}
	else
	{
		printf("Numero maior que dez");
	}
	return (0);
}
