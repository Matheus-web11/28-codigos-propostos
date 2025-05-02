#include <stdio.h>
/*1.7. Calculadora de Volume
Descrição: Calcule o volume de uma caixa retangular
Entrada: Comprimento, largura e altura (float)
Saída: Volume calculado*/

int main(){

float comprimento, largura, altura, volume;

printf("Digite tres valores para um retangulo sendo:\n1.Comprimento\n2.Largura\n3.altura\n");

printf("\n1.Comprimento: ");
scanf(" %f", &comprimento);

printf("2.Largura: ");
scanf(" %f", &largura);

printf("3.Altura: ");
scanf(" %f", &altura);


volume = comprimento * largura * altura;

printf("O volume do seu triangulo eh:%.2f unidade cubicas", volume);

return 0;
}
