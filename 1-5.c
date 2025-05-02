#include <stdio.h>

int main(){
/*1.5. Calculadora de Idade em Dias
Descrição: Programa que converte idade em anos, meses e dias para dias totais
Entrada: Anos (int), meses (int) e dias (int)
Saída: Quantidade total de dias*/

int dia, mes, ano, idade, idade_dia;

printf("Digite a idade do seu nascimento: ");
scanf("%d", &dia);

printf("Digite o mes do seu nascimento: ");
scanf("%d", &mes);

printf("Digite o ano do seu nascimento: ");
scanf("%d", &ano);

idade = 2025-ano;
if(idade < 2025){
idade--;}

idade_dia = idade * 365 + 4;

printf("Sua idade em dias eh...");

getchar();
getchar();

printf("\n%d/%d/%d = %d dias", dia, mes, ano, idade_dia);

return 0;
}
