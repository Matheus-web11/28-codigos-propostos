#include <stdio.h>

int main(){

char nome[40], genero;
int idade;
float altura;

  printf("Escreva seu nome: \n");
  scanf("%s", &nome);

  printf("Indique sua idade: \n");
  scanf("%d", &idade);

  printf("Indique seu gênero: (M/F) \n");
  scanf(" %c", &genero);

  printf("Indique sua altura: \n");
  scanf("%f", &altura);

  printf("Seu nome é:%s\n", nome);
  printf("Sua idade é:%d\n", idade);
  printf("Seu gênero é:%c\n", genero);
  printf("Sua altura é:%.2f\n", altura);

return 0;
}
