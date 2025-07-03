#include <stdio.h>
  int main()
  {
  int nro1, nro2;
  float nro3;
  char letra_1, letra_2, letra_3;

  printf("Digite dois numeros inteiros: \n");
  scanf("%d %d" , &nro1, &nro2);
      
  printf("Digite um numero real: \n");
  scanf("%f" , &nro3);
  
  printf("Digite tres caracteres: \n");
  scanf(" %c %c %c" , &letra_1, &letra_2, &letra_3);

  printf("Seus numeros inteiros eh: %d %d\nSeu numero real eh: %.2f\nSeus caracteres eh:%c %c %c\n" , nro1, nro2, nro3, letra_1, letra_2, letra_3);
  return 0;
  }
