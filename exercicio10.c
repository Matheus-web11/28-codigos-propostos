#include <stdio.h>

/*faça um cardápio que apareça no terminal por meio do printf com no mínimo 5 escolhas, e faça a opção de escolha das opções*/

int main(){

int quantidade;
int item1, item2, item3, item4;
char opcao;


printf("Seja bem-vindo ao restaurante TUDO-QUERO. Iremos apresentar nosso cardapio!\n");
printf("\nPressione enter para continuar...\n");
getchar();

printf("Temos essas opções, escolha oque mais te agradara no momento!\n");
printf("1.agua, digite 1\n");
printf("2.coca, digite 2\n");
printf("3.hamburguer, digite 3\n");
printf("4.pizza, digite 4\n");
printf("\nEscolha um de cada vez, para que eu anote eu nao tenha erro!\n");
printf("Anote seu pedido:");

scanf("%d", &item1);


if(item1<1 && item1>4){
printf("Não temos essa opcao!");}

if(item1==1){
printf("A caminho, agua...");}

if(item1==2){
printf("A caminho,coca...");}

if(item1==3){
printf("A caminho, um hamburguer...");}

if(item1==4){
printf("A caminho, uma pizza...");}

printf("quer algo mais? (S/N): \n");
scanf(" %c", &opcao);

if((opcao=='S' || opcao=='s')){
printf("\n2.coca, digite 2\n");
printf("3.hamburguer, digite 3\n");
printf("4.pizza, digite 4\n");
}
else{
  printf("Obrigado pela preferencia, volte sempre!");}

printf("Segundo item: ");
scanf(" %d", &item2);

if(item2==1){
printf("Voce ja pediu agua, por favor escolha outro");}

if(item2==2){
printf("A caminho,coca...");}

if(item2==3){
printf("A caminho, um hamburguer...");}

if(item2==4){
printf("A caminho, uma pizza...");}

printf("quer algo mais? (S/N): ");
scanf(" %c", &opcao);

if((opcao=='S' || opcao=='s')){
printf("3.hamburguer, digite 3\n");
printf("4.pizza, digite 4\n");
}
else{
  printf("Obrigado pela preferencia, volte sempre!");}

printf("Terceiro item: ");
scanf(" %d", &item3);

if(item3==1){
printf("Voce ja pediu agua, por favor escolha outro");}

if(item3==2){
printf("Voce ja pediu coca, por favor escolha outro");}

if(item3==3){
printf("A caminho, um hamburguer...");}

if(item3==4){
printf("A caminho, uma pizza...");}

printf("\nquer algo mais? (S/N): ");
scanf(" %c", &opcao);
if((opcao=='S' || opcao=='s')){;
printf("4.pizza, digite 4\n");
}
else{
  printf("Obrigado pela preferencia, volte sempre!");}

printf("Quarto item: ");
scanf("%d", &item4);

if(item4==1){
printf("Voce ja pediu agua, por favor escolha outro");}


if(item4==2){
printf("Voce ja pediu coca, por favor escolha outro");
}
if(item4==3){
printf("Voce ja pediu hamburguer, por favor escolha outro");}

if(item4==4){
printf("A caminho, uma pizza...\n");}

if(((item1 && item2 && item2 && item4))){
printf("Impressionante, todos os itens forem pedidos!!!");}

return 0;
}

