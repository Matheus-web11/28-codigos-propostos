#include <stdio.h>

int main(){

float sua_altura;
int menor_altura_mundial;
int maior_altura_mundial;
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
