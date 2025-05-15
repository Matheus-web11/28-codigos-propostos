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
