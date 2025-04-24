#include <stdio.h>

int main() {

/*faça um algoritmo que insira dois números e que a divisão deles de um resultado que seja obrigatóriamente um número inteiro. Temos duas variaveis do tipo float, onde o usuario pode digitar dois numeros onde depois entra na variável int que se chama divisão, que vai pegar os valores digitados pelo o usuario e realizar a divisao deles, só que o resultado vai ser do tipo inteiro*/

float nro1, nro2;
int divisao;

  printf("Digite um numero: \n");
scanf("%f", &nro1);

printf("Digite outro numero: \n");
scanf("%f", &nro2);

divisao=nro1/nro2;

printf("Seu valor deu:%d", divisao);

return 0;
}


