#include <stdio.h>

int main(){
    int nro[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10, 20, 30};
    int i, novo_valor, achou = 0;
    
    printf("Digite tres numeros\n");
    
    for(i = 0; i < 3; i++){
    printf("numero %d: " , i + 1);
    scanf("%d" , &nro[i]);
    }
    
    printf("Digite um numero para ver se ele se encontra no vetor: ");
    scanf("%d" , &novo_valor);
    
    for(i = 0; i < 3; i++){
        if(nro[i] == novo_valor){
        achou = 1;
        break;
        }
    }    
        
    if(achou){
        printf("O numero %d se encontra no vetor", novo_valor);}
        else{
            printf("Seu valor nao se encontra no vetor");}
     return 0;
     
}