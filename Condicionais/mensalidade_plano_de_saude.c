#include <stdio.h>

int main()
{
  char nome[20];
  int idade;

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade <= 18)
  {
    printf("Ola, %s! O valor do plano e R$ 50,00", nome);}
  
  else if (idade >= 19 && idade <= 29)
    {
      printf("Ola, %s! O valor do plano e R$ 70,00", nome);
    }
   if (idade >= 30 && idade <= 45)
  {
    printf("Ola, %s! O valor do plano e R$90,00", nome);
	}
	else if (idade >= 46 && idade <= 65)
    {
      printf("Ola, %s! O valor do plano e R$ 130,00", nome);
    }
  
  if (idade >=66)
  {
    printf("Ola, %s! O valor do plano e R$ 170,00", nome);
  }
  return 0;
}
