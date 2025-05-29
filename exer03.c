#include <stdio.h>

int main(){

int maior[3];
int i, j, maior_valor;

printf("Digite tres numeros, e sera mostrado o maior: ");

  for(i = 0; i < 3; i++){
      scanf("%d", &maior[i]);
     }
  for(j = 0; j< 3; j++){
    if(maior[j] > maior_valor){
    maior_valor = maior[j];
    }
  }
 printf("%d", maior_valor);
return 0;
}
