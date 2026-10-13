#include <stdio.h>

int main()
{
  char nome[20];
  char matricula[11];
  float n1, n2, media;

  const int aprovado = 6;

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite seu numero de matricula: ");
  scanf("%s", matricula);

  printf("Digite sua primeira nota: ");
  scanf("%f", &n1);

  printf("Digite sua segunda nota: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  printf("Ola, %s\n", nome);
  printf("Numero da matricula: %s\n", matricula);
  printf("Sua media foi: %.2f\n", media);

  if (media >= aprovado)
  {
    printf("Voce atingiu a media.\n");
    printf("Aprovado(a)!");
  }
  else
  {
    printf("Voce nao atingiu a media.\n");
    printf("Reprovado(a)!");
  }
  return 0;
}