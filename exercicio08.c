/*escreva um algoritmo que peça o nome idade gênero e altura do usuário. Tendo duaz variaveis tipo char uma chamada nome e tendo um limite de palavras que pode ser digitada,
ja a outra e o genero, que o usuário vai apresentar se ele é masculino como 'M' e feminino como 'F'. outro tipo é inteiro para a idade,
que o usuário vai digitar sua idade. Outro é do tipo float altura, onde a altura é representado como valor de ponto flutuante.
Isso vai sendo de forma sequencial. primeiro nome, segundo a idade, terceiro o genero e depois a altura. e apresentara de forma organizada conforme digitado pelo o usuário*/

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
