#include <stdio.h>

int main(){

int vetor_1[5], vetor_2[5], vetor_final[10];

  printf("Digite 5 valores: \n");
  for(int i = 0; i < 5; i++){
    scanf("%d" , &vetor_1[i]);}

    printf("Digite mais 5 valores: ");
    for(int j = 0; j < 5; j++){
      scanf("%d" , &vetor_2[j]);}

    for(int i = 0; i < 5; i++){
    vetor_final[i] = vetor_1[i];
    vetor_final[i + 5] = vetor_2[i];
}
     printf("os 10 numeros digitados sao: ");
    for(int k = 0; k < 10; k++){
    printf("%d " , vetor_final[k]);
    }
return 0;
}
