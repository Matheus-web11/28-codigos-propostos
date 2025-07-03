#include <stdio.h>

int main(){
  int idade_meses, idade, idade_dias;

  printf("Digite sua idade: ");
  scanf("%d" , &idade);

idade_meses = idade * 12;
idade_dias = idade * 365;

printf("Sua idade eh: %d\n" , idade);
printf("Sua idade em meses eh: %d\n" , idade_meses);
printf("Sua idade em dias eh: %d\n" , idade_dias);

return 0;
}
