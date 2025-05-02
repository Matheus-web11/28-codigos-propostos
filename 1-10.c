#include <stdio.h>
/*1.10. Calculadora de Desconto
Descrição: Calcule o valor final de um produto com desconto
Entrada: Valor original (float) e percentual de desconto (float)
Saída: Valor com desconto*/

int main(){

float valor, desconto, desconto_atual, valor_ddd;

printf("Digite um valor qualquer em dinheiro:R$ ");
scanf("%f" , &valor);

printf("Digite um desconto que sera usado no seu valor: ");
scanf("%f" , &desconto);

desconto_atual = valor * (desconto / 100);
valor_ddd = valor - desconto_atual;

printf("Seu valor com desconto de %.0f%%: R$%.2f\n", desconto, valor_ddd);

return 0;
}
