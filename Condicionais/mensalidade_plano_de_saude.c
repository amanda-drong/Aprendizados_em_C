#include <stdio.h>

int main()
{
  char nome[20];
  int idade;
  double valor;

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade <= 18)
  {
    valor = 50.00;
  }

  else if (idade <= 29)
  {
    valor = 70.00;
  }
  else if (idade <= 45)
  {
    valor = 100.00;
  }
  else if (idade <= 65)
  {
    valor = 150.00;
  }
  else
  {
    valor = 170.00;
  }
  printf("Ola, %s! O valor do plano e R$ %.2f", nome, valor);

  return 0;
}
