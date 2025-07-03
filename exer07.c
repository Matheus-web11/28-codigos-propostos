#include <stdio.h>

int main(){
  int ra;
  int n1, n2, n3;
    
  printf("Digite seus primeiros digitos do RA: ");
  scanf("%d" , &ra);
  
  if(ra > 100){
    n1 = 9;
    n2 = 8;
    n3 = 7;
    printf("Suas 3 notas sao: %d %d %d" , n1, n2, n3);}

  else{
    n1 = 5;
    n2 = 6;
    n3 = 7;
    printf("Suas 3 notas sao: %d %d %d" , n1, n2, n3);}

printf("\nSeu RA eh: %d\n Sua nota 1 eh: %d\n Sua nota 2 eh: %d\n Sua nota 3 eh: %d\n" , ra, n1, n2, n3);

return 0;
}
