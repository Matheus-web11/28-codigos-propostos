#include <stdio.h>

int main() {

/*crie um algoritmo que some 3 números inteiro e depois calcule a média. Nesse algoritmo sera feito a soma de tres valores digitados pelo o usuario, representado por x, y e z, tambem tem duas variaveis do tipo int, onde um e a soma e a divisao, que sera feito. tem tambem uma variavel do tipo float onde eu defini seu valor como 3, onde apos a soma dos tres valores vai realizar a media. onde vai pegar os valores inteiros e dividir por 3 e descobrir a media*/

int x,y,z,soma, divisao;
float s=3;
char enter;

printf("Digite um valor: \n");
scanf("%d", &x);
scanf("%c", &enter);

printf("Digite um segundo valor: \n");
scanf("%d", &y);
scanf("%c", &enter);

printf("Digite um terceiro valor: \n");
scanf("%d", &z);
scanf("%c", &enter);

soma=x+y+z;
divisao=soma/s;

printf("A média dos seus três números somados deu:%d", divisao);

return 0;
}
