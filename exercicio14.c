#include <stdio.h>

int main() {

/*faça um algoritmo que declare dois valores reais e cinco carácteres. Nesse algoritmo foi feito um tipo float com duas variaveis x e y para os valores reais. e outro tipo char com 5 caracteres e outro para enter. onde esse char de 5 caracteres sera feito uma palavra, onde eu atribui valor oara cada caracter, e tambem fiz o mesmo processo com os float, eu escolhi dois valores reais para o float. o enter foi usado para que o usuario clique no enter e apareça a mensagem após.*/

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
