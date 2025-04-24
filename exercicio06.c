#include <stdio.h>
/*algoritmo que tenha como entrada dois numeros inteiros que some e depois mostre o resultado. Possui duas variaveis onde cada um é o numero digitado pelo o usuário,
a vai juntar esses dois valores e soma-los*/

int main(){
  int copo, agua, soma;
  
  printf("digite o primeiro valor: \n");
  scanf("%d", &copo);
  
  printf("agora o segundo: \n"); 
  scanf("%d", &agua);
  
  soma=copo + agua;
  
  printf("o resultado deu:%d", soma);
  
  
  
  return 0;
  
  }
