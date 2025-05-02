#include <stdio.h>

/*1.1. Calculadora de IMC
Descrição: Desenvolva um programa que calcule o Índice de Massa Corporal (IMC).
Entrada: Peso (float) e altura (float) de uma pessoa
Saída: Valor do IMC com duas casas decimais*/


int main(){

float peso, altura, imc;

printf("Digite seu peso em quilos: ");
scanf("%f", &peso);

printf("Digite sua altura em metros: ");
scanf("%f", &altura);

imc = peso / (altura*altura);

printf("Seu Valor de Indice de Massa Corporal (imc) eh:%.2f", imc);













return 0;
}
