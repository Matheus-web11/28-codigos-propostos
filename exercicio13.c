/*faça um algoritmo que colete a data de nascimento do usuário que devolva a sua idade em meses. Nesse algoritmo temos um tipo int com tres variaveis,
chamado dia, mes e ano. e outra variavel idade em meses. onde eu vou pedir do usuario a data do seu nascimento, o mes e o ano. apos disso sera feito o processo de fazer o
processo de saber qual é sua idade e fazer essa idade em meses. onde idade_em_meses sera feito para realizar uma operação que vai pegar o ano atual menos o ano que o usuario 
nasceu. depois vai pegar o valor e multiplicar pelo tanto de meses no ano que é 12. e depois vai fazer 4 menos o mes do usuario, o 4 é para definir que o valor sera calculado
até o mes de abril.*/

#include <stdio.h>

int main() {

int dia, mes, ano;
int idade_em_meses;


printf("Me diga o dia do seu nascimento:");
scanf(" %d", &dia);

printf("Me diga o mês do seu nascimento:");
scanf(" %d", &mes);

printf("Me diga o ano do seu nascimento:");
scanf(" %d", &ano);

idade_em_meses = (2025 - ano) * 12 + (4-mes);

printf("sua idade em meses é:%d\n", idade_em_meses);


return 0;
}
