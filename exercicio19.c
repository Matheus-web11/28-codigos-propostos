#include<stdio.h>
/*faça um algoritmo que receba dois números reais e que a multiplicação deles retorne obrigatoriamente um número inteiro*/
int main(){
    float x, y;
    float multiplicar;
    int resultado;
    printf("Digite primeiro numero real: ");
    scanf("%f", &x);
    printf("Digite o segundo número real: ");
    scanf("%f", &y);
    
    multiplicar=x*y;
    resultado = multiplicar;
    
    printf("A multiplicacao desses dois valores deu:%d", resultado);
    
    
    return 0;   
}