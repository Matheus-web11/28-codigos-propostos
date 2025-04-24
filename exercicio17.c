/*incompleto, não consegui terminar. faça um algoritmo que receba 5 números inteiros e retorne eles de forma ordenada e crescente. Nesse algoritmo, eu faço uma variavel onde pode armazenar 5
numeros em uma variavel chamada nro, e na frente do nome da variavel eu coloco o tanto de numeros que é pedido para ser colocado em ordem crescente, isso é chamado de vetor. e tem outra variavel chamado armazena,
o nome ja diz tudo, essa variavel vai armazenar um valor para que esse valor seja organizado de forma crescente entao, se ele for o MENOR numero, ele espera que todos os números seja escritos para que ele entre na
condição de ser o menor numero da sequencia, mesma coisa seria com o MAIOR, eu digito um valor, ele sera armazenado na variavel "armazena" e fica guardada, eu digito os restantes dos números, entao o computador le
as condições para que possa organizar esse valor na ordem crescente*/

#include <stdio.h>

int main(){



int nro[5];
int armazena;

printf("Digite cincos valores inteiros: \n");
scanf("%d %d %d %d %d", &nro[0],&nro[1],&nro[2],&nro[3],&nro[4]);

if(nro[0]>nro[1]){
armazena=nro[0];
nro[0]=nro[1];
nro[1]=armazena;
}
if(nro[0]>nro[2]){
armazena=nro[0];
nro[0]=nro[2];
nro[2]=armazena;
}

if(nro[0]>nro[3]){
armazena=nro[0];
nro[0]=nro[3];
nro[3]=armazena;
}
if(nro[0]>nro[4]){
armazena=nro[0];
nro[0]=nro[4];
nro[4]=armazena;
}
if(nro[1]>nro[2]){
armazena=nro[1];
nro[1]=nro[2];
nro[2]=armazena;
}
if(nro[1]>nro[3]){
armazena=nro[1];
nro[1]=nro[3];
nro[3]=armazena;
}
if(nro[1]>nro[4]){
armazena=nro[1];
nro[1]=nro[4];
nro[4]=armazena;
}
if(nro[2]>nro[3]){
armazena=nro[2];
nro[2]=nro[3];
nro[3]=armazena;
}
if(nro[2]>nro[4]){
armazena=nro[2];
nro[2]=nro[4];
nro[4]=armazena;
}
if(nro[3]>nro[4]){
armazena=nro[3];
nro[3]=nro[4];
nro[4]=armazena;
}
printf("seus valores em ordem crescente eh:%d %d %d %d %d", nro[0],nro[1],nro[2],nro[3],nro[4]);

return 0;
}

