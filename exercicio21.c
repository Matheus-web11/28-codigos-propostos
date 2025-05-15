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
