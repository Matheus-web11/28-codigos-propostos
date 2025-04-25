/*crie um algoritmo que receba 2 números inteiros e realize um divisão.
Em seguida informe se o resto dessa divisão é ímpar e imprima isso na tela. Nesse algoritmo é apresentado duas variaveis do tipo inteiro x e y e um
float chamado divisao.
eu peço que o usuario digite um numero inteiro e depois o outro. após isso, ele realizara uma divisão onde entra o float. só que como os valores
digitados sao inteiros,
e preciso converter esses numeros em float, depois eu faço if que se os numeros divididos darem resto 0 nao valida como resto impar, já se dividi
dois numeros onde de resto 1,
vai validar como impar e mostrara que a divisão saiu com resto impar*/

#include<stdio.h>

int main(){

int x, y;
float divisao;


    printf("Digite um valor inteiro qualquer: ");
    scanf("%d" , &x);
    printf("Digite seu segundo valor: ");
    scanf("%d" , &y);
    
    divisao=(float)x/y;
    
    if(x%2!=0 && y%2!=0){
   printf("o resto da sua divisao eh:%.5f" , divisao);}
    else{
    printf("Só mostraremos seu valor se der resto ímpar, obrigado!");}
    
    
    return 0;
}
