#include <stdio.h>

int main(){

    int nro[3] = {10, 20, 30};
    int i, valor, posicao, valor_novo, tamanho = -1;
    
    printf("Digite 3 valores: \n");
    
    for(i = 0; i < 3; i++){
        printf("numero %d ", i + 1);
        scanf("%d" , &nro[i]);
        
     }
     
         printf("Escolha uma posicao de (1 a 3): ");
         scanf("%d" , &posicao);
         
         if(posicao < 1 || posicao > 3){
             printf("posicao nao encontrada");}
             
             printf("digite um novo valor para substituir no vetor");
             scanf("%d" , &valor_novo);
             
             nro[posicao - 1] = valor_novo;
             
             for(i = 0; i < 3; i++){
                printf("%d ", nro[i]);
             }
             
         
     return 0;
     
}