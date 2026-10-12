#include <stdio.h>

int main()
{
  float media;

  printf("Digite a nota do aluno: ");
  scanf("%f", &media);

  if (media >= 7.0)
  {
    printf("Aprovado direto!");
  }
  else
  {
    if (media >= 4.0)
      printf("Vai fazer sub.");
    else
      printf("Reprovado!");
  }
  return 0;
}