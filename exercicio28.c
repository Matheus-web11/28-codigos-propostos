/*faça um algoritmo que tenha como entrada um valor real. Nesse algoritmo, vou usar uma so variavel do tipo float, e continuamente
vou pedir ao usuario digitar um
numero real simples, que sera mostrado na tela*/

#include <stdio.h>


int main(){

float nro;

printf("Digite um numero real: ");
scanf("%f", &nro);

printf("Seu  valor real eh:%.4f", nro);

return 0;
}
