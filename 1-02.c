#include <stdio.h>

/*1.2. Conversor de Temperatura
Descrição: Crie um programa que converta temperatura de Celsius para Fahrenheit e Kelvin
Entrada: Temperatura em Celsius (float)
Saída: Temperatura em Fahrenheit e Kelvin*/

int main(){

float celsius, fahrenheit, kelvin, conversaof, conversaok;

printf("Digite uma temperatura em celsius: ");
scanf("%f" , &celsius);

printf("Ela sera convertida em fahrenheit! (pressione enter)\n");

conversaof = (celsius*9) /5 +32;

getchar();
getchar();

printf("Sua temperatura convertida em fahrenheit eh:%.2f\n", conversaof);

getchar();

printf("Agora sua temperatura sera convertida em kelvin!\n");

getchar();

conversaok = celsius+273.15;

printf("Sua temperatura convertida em kelvin eh:%.2f", conversaok);



return 0;
}
