#include <stdio.h>
/*escreva um algoritmo que receba um valor em float e retorne um inteiro*/

int main(){

float a;
int resultado;

printf("Digite um numero real: ");
scanf("%f", &a);

resultado = a;

printf("Seu valor foi transformado em inteiro:%d",resultado);

return 0;

}
