#include <stdio.h>

int main()
{
  float valorDeposito, taxaJuros, valorRendimento, valorTotal;

  printf("Qual o valor do deposito: ");
  scanf("%f", &valorDeposito);

  printf("Qual o valor da taxa de juros: ");
  scanf("%f", &taxaJuros);

  valorRendimento = valorDeposito * (taxaJuros / 100);

  valorTotal = valorDeposito + valorRendimento;

  printf("\n O valor do rendimento: %.2f", valorRendimento);

  printf("\n Valor total: %.2f", valorTotal);

  return (0);
}