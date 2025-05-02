#include <stdio.h>
/*1.6. Conversor de Moedas
Descrição: Programa que converte um valor em reais para dólares e euros
Entrada: Valor em reais (float)
Saída: Valores convertidos em dólar e euro*/

int main(){

float real, conversaoD, conversaoE;
float dolar = 5.68, euro = 6.39;

printf("Digite um valor em reais (dinheiro): R$ ");
scanf("%f", &real);

conversaoD = real / dolar;

conversaoE = real / euro;

getchar();

printf("Seu valor em reais convertido para dolar e euro eh...!");

getchar();

printf("DOLAR = US$ %.2f\nEURO = € %.2f" , conversaoD, conversaoE);

return 0;
}
