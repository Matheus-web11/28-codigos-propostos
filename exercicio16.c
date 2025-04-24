/*crie um algoritmo que tenha como entrada as 3 dimensões de um algoritmo em metros. Nesse algoritmo, eu faço 4 variaveis do tipo float, onde tres desses floats serao somados e darao o resultado dessa soma. vou pedir o valor da largura em metros, do comprimento em metros e a altura em metros. onde esses valores serao usados na operação aritmética, soma. entao a junção dessas tres dimensões dara ao usuário um so resultado da soma dos tres*/

#include <stdio.h>

int main(){

float largura, comprimento, altura, soma;

printf("Digite um valor de largura (em metros): ");
scanf("%f", &largura);

printf("Digite um valor de comprimento (em metros): ");
scanf("%f", &comprimento);

printf("Digite um valor de altura (em metros): ");
scanf("%f", &altura);

soma = largura + comprimento + altura;

printf("Seu resultado em metros eh:%.3f", soma);

return 0;
}
