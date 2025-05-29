#include <stdio.h>

int main(){

  int nro[2];
  int i;
  int valor;
  
  printf("Digite dois numeros inteiros: ");
  
  for(i = 0; i < 2; i++){
    scanf("%d", &nro[i]);
}

valor = nro[0] + nro[1];

printf("%d" , valor);

return 0;
}
