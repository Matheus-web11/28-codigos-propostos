#include <stdio.h>
  int main(){
    int numeros[4], i;

    printf("Digite 4 numeros: \n");

    for(i = 0; i < 4; i++){
    scanf("%d" , &numeros[i]);}


   printf("Seus valores digitados sao: \n");
    for(i = 0; i < 4; i++){
    printf("%d. %d\n" , i+1, numeros[i]);}

  return 0;
}
