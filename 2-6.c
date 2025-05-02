#include <stdio.h>
/*2.6. Calculadora de Reajuste Salarial
Descrição: Calcule o reajuste salarial baseado em um percentual
Entrada: Salário atual (float) e percentual de reajuste (float)
Saída: Novo salário com reajuste*/

int main(){

float salario, porcento, slr_ajuste;

printf("Digite um valor de um salario\nR$:");
scanf("%f" , &salario);
  if(salario < 0){
  printf("De preferencia um valor positivo!");}

printf("Agora escreva uma porcentagem que sera ajustada ao seu salario (%)\n:");
scanf("%f" , &porcento);
  if(porcento < 0){
    printf("De preferencia um valor positivo!");}

slr_ajuste = salario * (1 + (porcento / 100));

printf("Seu salario foi alterado para:%.2f", slr_ajuste);





return 0;
}
