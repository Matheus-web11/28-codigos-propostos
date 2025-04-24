#include<stdio.h>

int main(){

int idade;
char sexo='M';
char sexo1='F';
char genero;
char nacao;
char defit;

/*Crie um algoritmo que receba as seguintes informações de um cidadão:
 Idade, Sexo, Nacionalidade, Possui alguma deficiência grave? (Sim/Não).
 Com base nessas informações, o algoritmo deve informar se o cidadão está apto ou não apto ao alistamento militar obrigatório.. Nesse algoritmo eu criei um tipo inteiro para idade e depois 5 char, onde cada char fara uma questao do que sera pedido no alistamento. um para sexo masculino, outro para o Feminino,outro para validar o sexo do usuario usando o genero, outro pra nacao e o ultimo para deficiência. entao sera realizado as perguntas de forma sequencial. primeiro pede a idade do usuario sea idade do usuario for menor que 18 ele nao consegue prosseguir. já o outro, se o usuário for do genero feminino, nao consegue prosseguir porque o alistamento é so para homens. o outro é a ncionalidade se for brasileiro continua o processo, se nao for brasileiro ele sera retirado tambem do questionário porque o alistamento é específicamente para quem é brasileiro. e por ultimo eu peço se o usuário possui alguma deficiência se sim, ele nao pode prosseguir, mais se nao ele continuará o questionário e conseguira realizá-lo com sucesso*/
 
     printf("Seja bem-vindo ao processo seletivo do alistamento militar Brasileiro!\n");
     
     printf("\nDigite sua idade: ");
     scanf("%d", &idade);
     if(idade>=18){
         printf("\nVoce esta apto a se alistar!\n");}
     else{
     printf("\nNao possui idade para o alistamento, obrigado!");}
     
     printf("Me diga seu sexo (M/F): ");
     scanf(" %c" , &genero);
     if(genero=='M' || genero=='m'){
         printf("Ok, confirmado!\n");}
     else{
         printf("\nMe desculpe mais seu genero nao esta apropriado ao alistamento!\n");
return 0;}
        
      

    printf("Voce possui nacionalidade Brasileira? (S/N): ");
    scanf(" %c", &nacao);
    if(nacao=='S' || nacao=='s'){
printf("Ótimo, continue o questionario\n");}
else{
    printf("Não podemos continuar, infelizmente!\n");}
      
printf("Estamos chegando ao fim, Agora me diga se voce possui alguma deficiencia (S/N): \n");
scanf(" %c" , &defit);
      if(defit=='N' || defit=='n'){
      printf("RESPOSTA REGISTRADA COM SUCESSO, OBRIGADO PELA A PARTICIPAÇÃO");}
      else{
     printf("Pessoas com deficiencia nao podem concluir o questionario!");}

         
     
    return 0;
}
