#include <stdio.h>

int main(){

float  x, y, x1, x2, soma1, soma2, dividir;
int dividir2;

printf("digite seu primeiro valor: \n");
scanf("%f", &x);

printf("digite seu segundo valor: \n");
scanf("%f", &y);

soma1=x+y;
if(x<=0 && y<=0){
  printf("a soma1 deu:%.3f\n", soma1);
}
else{

 printf("a soma1 deu:%.3f\n",soma1);
}
printf("digite seu terceiro valor: \n");
scanf("%f", &x1);

printf("digite seu quarto valor: \n");
scanf("%f", &x2);

soma2=x1+x2;

printf("a soma2 deu:%.3f\n", soma2);

dividir=soma1/soma2;

  if(dividir<=0 || dividir>=1){
      printf("a divisão das duas somas deu:%.3f\n", dividir);
      dividir2=(int)dividir;
      printf("a divisão das duas somas deu:%d\n", dividir2);
}
else{

printf("ERRO");

}
return 0;

}
