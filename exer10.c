#include <stdio.h>
  int main(){
    float tempo_inicio, tempo_fim;
    
    printf("Digite o tempo de inicio de uma partida: \n");
    scanf("%f" , &tempo_inicio);

    printf("Digite agora o tempo de fim da partida: \n")
    scanf("%f" , &tempo_fim);
  
printf("INICIO: %.3f\n FIM: %.3f\n" , tempo_inicio, tempo_fim);

return 0;
}
