/*Crie um algoritmo que identifica se o valor dado é um triângulo se for o algoritmo deve mostra se ele é equilátero, isósceles ou escaleno usando print, scanf, if e else.
Nesse algoritmo, eu uso tres variáveis do tipo float, e peço pro usuario digitar os valores em metros que serao cada lado do meu triângulo, com isso, 
eu preciso validar primeiro se os valores digitados pelo o usuário forma um triangulo, onde dois valores do triângulo precisa ser maior que o terceiro lado,
caso a soma dos dois lados nao ser maior que o terceiro já invalida como triangulo. depois de eu confirmar que meus tres valores sao um triângulo. 
eu preciso saber de qual tipo é esse triangulo, se é do tipo equilátero, isósceles ou escaleno. ele vai pegar os tres valores, se forem iguais sera validado
como equilatero, se dois lados forem iguais e o outr diferente entra na validação do isosceles, já se os tres lados forem diferentes entra na validação do escaleno.
e no final mostra se os valores forma um triangulo e qual tipo sera esse triangulo*/

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
