#include <stdio.h>

int main(){

float ld_1, ld_2, ld_3;
printf("Digite tres valores para ver se podemos criar um triangulo!\n");
printf("valor de lateral (1): ");
scanf("%f", &ld_1);

printf("valor de lateral (2): ");
scanf("%f", &ld_2);

printf("valor de lateral (3): ");
scanf("%f", &ld_3);

if(ld_1 + ld_2 > ld_3 && ld_2 + ld_1 > ld_3)
{
  printf("Temos um triangulo!,");}
else{
printf("Nao temos um triangulo!\n");}

return 0;
}
