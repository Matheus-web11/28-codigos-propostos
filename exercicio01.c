#include <stdio.h>
#include <math.h>

int main(){

float lateral_1, lateral_2, lateral_3;
//provar se eh um triangulo
printf("Digite tres valores para ver se podemos criar um triangulo!\n");
printf("valor de lateral (1): ");
scanf("%f", &lateral_1);

printf("valor de lateral (2): ");
scanf("%f", &lateral_2);

printf("valor de lateral (3): ");
scanf("%f", &lateral_3);

if(lateral_1 + lateral_2 > lateral_3 && lateral_2 + lateral_1 > lateral_3)
{
  printf("Temos um triangulo!,");}
else{
printf("Nao temos um triangulo!\n");}

//qual triangulo sera, equilatero, isosceles e escaleno
if(lateral_1 == lateral_2 && lateral_2 == lateral_3){
printf(" do tipo equilatero!");}

if(lateral_1 == lateral_2 && lateral_1 != lateral_3){
printf(" do tipo isosceles!");}

if(lateral_1 != lateral_2  && lateral_1 != lateral_3 && lateral_2 != lateral_3){
printf(" do tipo escaleno!");}



return 0;

}
