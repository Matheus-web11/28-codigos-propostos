#include <stdio.h>

int main(){

int dias, idade;

printf("Digite sua idade e mostrara em dias\n");
scanf("%d" , &idade);

idade *= 365;

printf(" %d dias" , idade);

return 0;
}
