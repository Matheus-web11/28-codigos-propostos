#include <stdio.h>

int main() {

//faça um algoritmo que declare dois valores reais e cinco carácteres

float x, y;
char c,a,r,o;
char enter;

x=10.5;
y=20.23;
c='C';
a='a';
r='r';
o='o';

printf("Apresentando dois números reais! (PRESSIONE ENTER)");
scanf("%c", &enter);
printf("%.1f e %.2f", x, y);
scanf("%c", &enter);

printf("Agora seis caracteres que formam uma palavra! (PRESSIONE ENTER)");
scanf("%c", &enter);
printf("%c%c%c%c%c\n", c,a,r,r,o);


return 0;
}
