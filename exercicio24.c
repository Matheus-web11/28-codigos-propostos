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
 Com base nessas informações, o algoritmo deve informar se o cidadão está apto ou não apto ao alistamento militar obrigatório.*/
 
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
