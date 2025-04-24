/*desenvolva um algoritmo que receba um número inteiro e informe se ele é par ou ímpar. Nesse algoritmo, foi usado uma variavel do tipo int chamado de nro, onde esse numero sera escolhido pelo o usuário, entao para fazer o processo de saber se é par ou ímpar vou usar o if. onde vou pegar o valor digitado do usuario e dividir por 2 onde, se o resto for zero ele sera par, se der resto ele sera impar*/

#include <stdio.h>

int main(){

int nro;

printf("Digite um valor e vera se eh impar ou par:\n");
scanf("%d", &nro);

if(nro%2==00){
  printf("Seu numero eh par!");}
else{
printf("Seu numero eh impar!");}

return 0;
}
