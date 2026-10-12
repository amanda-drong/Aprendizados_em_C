#include <stdio.h>

int main()
{
  int numero, resto;

  printf("Digite um numero:");
  scanf("%d", &numero);

  resto = numero / 2;

  resto = numero - (resto * 2);

  if (resto == 0)
  {
    printf("Par!");
  }
  else
  {
    printf("Impar!");
  }

  return (0);
}