#include <stdio.h>

int main(){

int ordem[5];
int i, j, ordenado;

    printf("Digite 5 numeros inteiros, estara em ordem descrecente: ");
    
    for(i = 0; i < 5; i++){
        scanf("%d" , &ordem[i]);
    }
        for(i = 0; i < 5 - 1; i++){
            for(j = 0; j < 5 - i - 1; j++){
                 if(ordem[j] < ordem[j+1]){
                 ordenado = ordem[j];
                 ordem[j] = ordem[j+1];
                 ordem[j+1] = ordenado;}
            }
        }
    
    for(i = 0; i < 5; i++){
    
    printf("%d " , ordem[i]);
    }
     return 0;
}