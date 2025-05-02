#include <stdio.h>
/*1.3. Calculadora de Área do Círculo
Descrição: Desenvolva um programa que calcule a área de um círculo usando uma constante para PI
Entrada: Raio do círculo (float)
Saída: Área do círculo com duas casas decimais*/

int main(){

float raio_circulo, total;
const float pi = 3.14159;

printf("Digite um valor para o raio de um circulo: ");
scanf("%f", &raio_circulo);

printf("Agora iremos calcular esse valor para descobrir a area do circulo!");

getchar();
getchar();

total = pi * (raio_circulo * raio_circulo);

printf("Apos o calculo, a area do circulo achado atraves do raio digitado eh\n");

printf("=%.2f", total);

return 0;
}
