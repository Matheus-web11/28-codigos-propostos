#include <stdio.h>
  int main()
  {
  int numeros[10] , i;

  printf("Digite 10 numeros inteiros: ");
  
  for(i = 0; i < 10; i++)
    {
    scanf("%d" , &numeros[i]);
    }
  printf("Seus valores sao: \n");
  for(i = 0; i < 10; i++)
    {
    printf("%d " , numeros[i]);
    }
  return 0;
  }
