#include <stdio.h>
/*1.9. Conversor de Segundos
Descrição: Converta um valor em segundos para horas, minutos e segundos
Entrada: Tempo em segundos (int)
Saída: Tempo formatado em horas:minutos:segundos*/

int main(){

int valor, segundos, minutos, horas;

printf("Digite um valor inteiro: ");
scanf("%d", &valor);

printf("Esse valor sera convertido em\n1.HORAS\n2.MINUTOS\n3.SEGUNDOS");

getchar();
getchar();

horas = valor / 3600;
printf("\nSeu valor em horas:%d", horas);

minutos = (valor % 3600) / 60;
printf("\nSeu valor em minutos:%d", minutos);

segundos = valor % 60;
printf("\nSeu valor em segundos eh:%d", segundos);

printf("\n%dh %dmin %dseg\n", horas, minutos, segundos);






return 0;
}
