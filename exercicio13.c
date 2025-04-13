#include <stdio.h>

int main() {

//faça um algoritmo que colete a data de nascimento do usuário que devolva a sua idade em meses

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
