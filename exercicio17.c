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

