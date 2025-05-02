#include <stdio.h>
/*2.3. Verificador de Ano Bissexto
Descrição: Determine se um ano é bissexto usando operadores lógicos
Entrada: Ano (int)
Saída: "Bissexto" ou "Não Bissexto"*/
int main(){

int ano;

printf("Digite um ano e mostrara se ele e um ano bissexto ou nao\n:");
scanf("%d", &ano);

if(ano % 4 == 0 && ano % 400 == 0 && ano % 100 == 0){
  printf("O ano digitado eh bissexto!");}
else{
  printf("O ano digitado nao eh bissexto!");}



return 0;
}
