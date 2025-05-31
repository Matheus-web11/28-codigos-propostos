#include <stdio.h>

int main(){

int menor[3];
int i, j, menor_valor;

printf("Digite tres numeros, e sera mostrado o menor: ");

  for(i = 0; i < 3; i++){
      scanf("%d", &menor[i]);
     }
     menor_valor = menor[0];
     
  for(j = 0; j < 3; j++){
    if(menor[j] < menor_valor){
        menor_valor = menor[j];
    }
  }
 printf("%d", menor_valor);
return 0;
}