/*crie um algoritmo que identifique se a altura do usuário é maior ou menor da altura media nacional. Nesse algoritmo eu coloquei uma variavel tipo float para altura e outro do tipo char para saber o genero do usuario 'M' para masculino e 'F' para feminino. peço que o usuário digite sua altura e seu genero, onde eu vou comparar sua altura com o genero e ver se ele se encontra na média nacional masculina ou feminina*/

#include <stdio.h>

int main(){

float sua_altura;
char genero;


printf("Me diga sua altura em metros: ");
scanf("%f", &sua_altura);


printf("Agora me diga seu genero (M/F)");
scanf(" %c", &genero);

if(genero == 'M' || genero == 'm'){
  if(sua_altura >= 1.80){
    printf("Parabens voce esta na altura media Masculina\n");}
      else{
printf("Voce nao esta na altura media mundial masculina!\n");}
}
else if(genero == 'F' || genero == 'f'){
if(sua_altura>=1.60 && sua_altura<=1.70){
  printf("Parabens voce esta na media Feminina\n");}
else{
printf("Voce esta fora da media feminina! \n");}
}

return 0;
}
