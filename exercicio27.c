/*escreva um algoritmo que receba um valor em float e retorne um inteiro. Nesse algoritmo eu fiz uma variavel 'a' do tipo float, e outro do tipo inteiro 'resultado', o float
'a' sera digitado
pelo o usuario, onde esse valor sera convertido em inteiro, graças ao int 'resultado' que realizara o processo de float para inteiro*/

#include <stdio.h>

int main(){

float a;
int resultado;

printf("Digite um numero real: ");
scanf("%f", &a);

resultado = a;

printf("Seu valor foi transformado em inteiro:%d",resultado);

return 0;

}
