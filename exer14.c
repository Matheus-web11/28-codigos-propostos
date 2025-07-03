#include <stdio.h>
  int main()
  {
  char letras[4], i;

  printf("Digites 4 caracteres: ");

  for(i = 0; i < 4; i++)
  {
    scanf("%d" , &letras[i]);
  }
  printf("Seus caracteres eh: \n");
  for(i = 0; i < 4; i++)
  {
   printf("%c " , letras[i]); 
  }
  return 0;
  }
