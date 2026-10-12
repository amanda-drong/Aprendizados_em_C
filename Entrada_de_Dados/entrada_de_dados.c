#include <stdio.h>

#define ANO_ATUAL 2026

int main()
{
  char nome[20];
  int idade, anoNascimento;
  float altura;

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  anoNascimento = ANO_ATUAL - idade;

  printf("\nSeu nome: %s", nome);
  printf("\nSua idade: %d", idade);
  printf("\nSua altura: %.2f", altura);
  printf("\nAno de nascimento: %d", anoNascimento);

  return 0;
}