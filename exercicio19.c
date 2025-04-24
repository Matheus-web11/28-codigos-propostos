/*faça um algoritmo que receba dois números reais e que a multiplicação deles retorne obrigatoriamente um número inteiro. Nesse algoritmo é apresentado
tres variaveis float x, y e multiplicar e um inteiro chamado multiplicar. x e y vai ser os valores que o usuário vai digitar, após isso, sera feito o
processo da multiplicação desses dois valores do usuario. após isso vai pegar o valor digitado que é do tipo float e sera convertido para numero real.
onde q variavel resultado faz esse processo de conversão de real para inteiro*/

#include<stdio.h>


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
