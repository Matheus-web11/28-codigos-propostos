#include <stdio.h>

int main(){

  int media[3];
  int i, valor;
  
    printf("Digite tres numeros, para calcular a media ");
    for(i = 0; i < 3; i++){
      scanf("%d" , &media[i]);
    }
    valor = (media[0] + media[1] + media[2]) / 3;
    
    printf("%d", valor);

return 0;
}
