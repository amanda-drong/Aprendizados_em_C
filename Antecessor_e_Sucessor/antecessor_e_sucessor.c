#include <stdio.h>

int main()
{
	int numero, antecessor, sucessor;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	antecessor = numero - 1;
	sucessor = numero + 1;

	printf("\n O numero escolhido:  %d", numero);
	printf("\n O antecessor:  %d", antecessor);
	printf("\n O sucessor: %d", sucessor);

	return (0);
}
