#include <stdio.h>
/*1.8. Calculadora de Consumo de Combustível
Descrição: Calcule o consumo médio de combustível
Entrada: Distância percorrida (float) e litros consumidos (float)
Saída: Consumo médio (km/l)*/

int main(){

float d_percorrido, l_consumido;
float consumo_medio;

printf("Digite uma distancia em KM: ");
scanf("%f", &d_percorrido);

printf("Digite os litros que voce pretende gastar: ");
scanf(" %f", &l_consumido);

consumo_medio = d_percorrido / l_consumido;

printf("O consumo medio que sera usado eh:%.2f (km/l)", consumo_medio);

return 0;
}
