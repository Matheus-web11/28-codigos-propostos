#include <stdio.h>

int main() {

int x,y,z,soma, divisao;
float s=3;
char enter;

printf("Digite um valor: \n");
scanf("%d", &x);
scanf("%c", &enter);

printf("Digite um segundo valor: \n");
scanf("%d", &y);
scanf("%c", &enter);

printf("Digite um terceiro valor: \n");
scanf("%d", &z);
scanf("%c", &enter);

soma=x+y+z;
divisao=soma/s;

printf("A média dos seus três números somados deu:%d", divisao);

return 0;
}
