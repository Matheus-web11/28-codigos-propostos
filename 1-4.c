#include <stdio.h>
/*Troca de Valores
Descrição: Crie um programa que troque o valor de duas variáveis
Entrada: Dois números inteiros
Saída: Valores trocados*/

int main(){

int x, y;

printf("Digite dois numeros inteiros!\n");
printf("Digite o primeiro numero: ");
scanf(" %d", &x);

getchar();
getchar();

printf("Digite o segundo numero: ");
scanf("%d", &y);

if(++x>0 && ++y>0){

printf("Seus valores digitados foram alterados para:%d %d", x, y);
}
return 0;
}
