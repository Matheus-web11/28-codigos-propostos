#include <stdio.h>
/*2.7. Verificador de Divisibilidade
Descrição: Verifique se um número é divisível por 2, 3 e 5
Entrada: Um número inteiro
Saída: Lista de divisores entre 2, 3 e 5*/

int main(){

int nro;

printf("Digite um valor inteiro\n:");
scanf("%d" , &nro);

printf("Agora iremos verificar se seu numero e divisivel por 2, 3 e 5!\n");

getchar();
getchar();

if(((nro % 2 == 0 && nro % 3 == 0) && nro % 5 == 0)){
printf("Seu numero e divisivel por 2, 3 e 5!");}

else{

if(nro % 2 == 0){
  printf("Seu valor eh divisivel por 2!");}

if(nro % 3 == 0){
  printf("Seu valor eh divisivel por 3!");}

if(nro % 5 == 0){
  printf("Seu valor eh divisivel por 5!");}

if(nro % 2 != 0 && nro % 3 != 0 && nro % 5 != 0){
  printf("Seu valor nao eh divisivel por 2, 3 e 5!");}

}
return 0;
}
