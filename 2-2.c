#include <stdio.h>
/*2.2. Calculadora de Média Ponderada
Descrição: Calcule a média ponderada de três notas
Entrada: Três notas (float) e seus respectivos pesos (int)
Saída: Média ponderada*/

int main(){

float nota1, nota2, nota3;
int peso1, peso2, peso3;
float media_p;
int peso_total;
float media_total;

printf("Digite tres notas para cada prova:\n");
scanf("%f %f %f" , &nota1, &nota2, &nota3);

printf("Digite o peso de cada prova (valor inteiro):");
scanf("%d %d %d" , &peso1, &peso2, &peso3);

media_p = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
peso_total = peso1 + peso2 + peso3;
media_total = media_p / peso_total;

printf("Sua media ponderada de suas provas eh:%.2f", media_total);


return 0;
}
