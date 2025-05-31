#include <stdio.h>

int main(){

    int nro[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int i, valor, encontrado = 0, posicao;
    printf("Escolha 10 numeros de sua preferencia: ");
    scanf("%d" , &valor);
    for(i = 0; i < 10; i++){
        if(nro[i] == valor){
        encontrado = 1;
        posicao = i;
        break;
        }
    }
    
        if(encontrado){
            printf("O valor encontrado no vetor foi %d na posicao %d" , valor, posicao);}
            else{
            printf("Seu valor nao foi encontrado no vetor");}
            
                
                
     return 0;
}