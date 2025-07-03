#include <stdio.h>
  int main(){ 
  float altura;
  char genero;
  
  printf("Digite sua altura: \n");
  scanf("%f" , &altura);

  printf("Agora seu genero (M/F): ")
  scanf("%c" , &genero);
  
  if(genero == 'M' || genero == 'F'){
  printf("%c" , genero);}

  printf("Sua altura eh: %.2f\n Seu genero eh: %c\n" , altura, genero);

return 0;
}
