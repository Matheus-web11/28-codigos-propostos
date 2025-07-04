#include <stdio.h>
  int main(){
  int exercicio, i = 0, j;
  
  for(j = 0; j = exercicio >= 1 || exercicio <= 21; j++)
  {  
  printf("\nDigite o numero do exercicio! (1 A 21. ou 0 caso queira sair): ");
  scanf("%d" , &exercicio);

  if(exercicio == 0)
  {
    printf("Saindo do programa, obrigado\n ");
    break;
  }
  switch(exercicio)
    {
    case 1:
    printf("Exercicio 1: apresente dois valores float\n");
      {
        float ponto1 = 2.0;
        float ponto2 = 2.2;
        printf("%.2f %.2f\n" , ponto1, ponto2);
    break;
      }
    case 2:
      printf("Exercicio 2: Um algoritmo que processe tres numeros inteiros chamados de A,B,C\n");
      {
        int a, b, c;

      a = 1;
      b = 2;
      c = 3;

      printf("%d %d %d\n" , a, b, c);
    break;
     }
    case 3:
      printf("Exercicio 3: Um algoritmo como entradas a idade da pessoa em ANOS, MESES E DIAS\n");
      {  
        int idade_meses, idade, idade_dias;

        printf("Digite sua idade: ");
        scanf("%d" , &idade);

        idade_meses = idade * 12;
        idade_dias = idade * 365;

        printf("Sua idade eh: %d\n" , idade);
        printf("Sua idade em meses eh: %d\n" , idade_meses);
        printf("Sua idade em dias eh: %d\n" , idade_dias);
    break;
      }
    case 4:
      printf("Exercicio 4: Um algoritmo como entrada a idade de uma pessoa expressa em DIAS\n");
      {
        int idade_1;

        printf("Digite sua idade e mostrara em dias: ");
        scanf("%d" , &idade_1);

        idade_1 *= 365;

        printf("Sua idade em dias eh: %d\n" , idade_1);
      break;      
      }
    case 5:
      printf("Exercicio 5: Um algoritmo como entrada TRES NOTAS de um estudante\n");
      {
        float n1, n2, n3;

        printf("Digite tres numeros reais para uma nota de um estudante: ");
        scanf("%f %f %f" , &n1, &n2, &n3);

        printf("%.2f %.2f %.2f" , n1, n2, n3);
      break;        
      }
    case 6:
      printf("Exercicio 6: Um algoritmo que le tres valores reais\n");
      {
        float n1, n2, n3;

        printf("Digite tres numeros reais: ");
        scanf("%f %f %f" , &n1, n2, n3);

        printf("%.2f %.2f %.2f" , n1, n2, n3);
      break;
      }
    case 7:
      printf("Exercicio 7: Um algoritmo como entrada dois valores inteiros\n");
      {
        int nro1, nro2;
  
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d" , &nro1, nro2);

        printf("Seus valores forao: %d %d" , nro1, nro2);
      break;
      }
     case 8:
      printf("Exercicio 8: Um algoritmo como entrada o RA de um estudante e suas TRES NOTAS\n");
      {
        int ra;
        int n1, n2, n3;
    
        printf("Digite seus primeiros digitos do RA: ");
        scanf("%d" , &ra);
  
        if(ra > 100){
        n1 = 9;
        n2 = 8;
        n3 = 7;
        printf("Suas 3 notas sao: %d %d %d" , n1, n2, n3);}

      else{
      n1 = 5;
      n2 = 6;
      n3 = 7;
      printf("Suas 3 notas sao: %d %d %d" , n1, n2, n3);}

      printf("\nSeu RA eh: %d\n Sua nota 1 eh: %d\n Sua nota 2 eh: %d\n Sua nota 3 eh: %d\n" , ra, n1, n2, n3);
    break;
      }
     case 9:
      printf("Exercicio 9: Um algoritmo como entrada a altura e o genero de uma pessoa\n");
      {
        float altura;
        char genero;
  
        printf("Digite sua altura: \n");
        scanf("%f" , &altura);

        printf("Agora seu genero (M/F): ");
        scanf("%c" , &genero);
  
        if(genero == 'M' || genero == 'F'){
        printf("%c" , genero);}

        printf("Sua altura eh: %.2f\n Seu genero eh: %c\n" , altura, genero);
    break;
      }
     case 10:
      printf("Exercicio 10: Um algoritmo como entrada hora de INICIO e FIM de uma partida\n");
      {
        float tempo_inicio, tempo_fim;
    
        printf("Digite o tempo de inicio de uma partida: \n");
        scanf("%f" , &tempo_inicio);

        printf("Digite agora o tempo de fim da partida: \n");
        scanf("%f" , &tempo_fim);
  
        printf("INICIO: %.3f\n FIM: %.3f\n" , tempo_inicio, tempo_fim);
    break;
      }
   case 11:
      printf("Exercicio 11: Um algoritmo de entrada de 4 numeros inteiros\n");
      {
         int numeros[4], i;

        printf("Digite 4 numeros: \n");

        for(i = 0; i < 4; i++){
        scanf("%d" , &numeros[i]);}


        printf("Seus valores digitados sao: \n");
        for(i = 0; i < 4; i++){
        printf("%d. %d\n" , i+1, numeros[i]);}
    break;
      }
     case 12:
      printf("Exercicio 12: Um algoritmo como entrada um valor real\n");
      {
        float numero_real;

        printf("Digite um valor real: ");
        scanf("%f" , &numero_real);

        printf("Seu numero real eh: %.3f" , numero_real);
    break;
      }
     case 13:
      printf("Exercicio 13: Um algoritmo como entrada que tenha 10 numeros inteiros\n");
      {
        int numeros[10] , i;

        printf("Digite 10 numeros inteiros: ");
  
        for(i = 0; i < 10; i++)
        {
        scanf("%d" , &numeros[i]);
        }
        printf("Seus valores sao: \n");
        for(i = 0; i < 10; i++)
        {
        printf("%d " , numeros[i]);
        }
    break;
        }
     case 14:
      printf("Exercicio 14: Um algoritmo que tenha como entrada  4 caracteres\n");
      {
         char letras[4], i;

        printf("Digites 4 caracteres: ");

        for(i = 0; i < 4; i++)
        {
        scanf("%d" , &letras[i]);
        }
        printf("Seus caracteres eh: \n");
        for(i = 0; i < 4; i++)
        {
        printf("%c " , letras[i]); 
        }
    break;
      }
     case 15:
      printf("Exercicio 15: Um algoritmo que tenha como entrada 2 numeros inteiros. 1 numero float. 3 caracteres\n");
      {
        int nro1, nro2;
        float nro3;
        char letra_1, letra_2, letra_3;

        printf("Digite dois numeros inteiros: \n");
        scanf("%d %d" , &nro1, &nro2);
      
        printf("Digite um numero real: \n");
        scanf("%f" , &nro3);
  
        printf("Digite tres caracteres: \n");
        scanf(" %c %c %c" , &letra_1, &letra_2, &letra_3);

      printf("Seus numeros inteiros eh: %d %d\nSeu numero real eh: %.2f\nSeus caracteres eh:%c %c %c\n" , nro1, nro2, nro3, letra_1, letra_2, letra_3);
    break;
      }
     case 16:
      printf("Exercicio 16: Um algoritmo que mostra 5 caracteres ");
      {

      char x1, x2, x3, x4, x5;

      x1 = 1;
      x2 = 2;
      x3 = 3;
      x4 = 4;
      x5 = 5;

      printf("%c %c %c %c %c" , x1, x2, x3, x4, x5);
    break;
      }
     case 17:
      printf("Exercicio 17:  Um algoritmo que mostra tres numeros reais\n");
      {
        float a, b, c;

        a = 5.25;
        b = 10.67;
        c = 15.4;
        
        printf("%f %f %f" , a, b, c);
    break;
      }
    case 18:
      printf("Exercicio 18: Um algoritmo que mostra  numeros inteiros e 1 numero real\n");
      {
        int a, b;
        float c;

        a = 10;
        b = 20;
        c = 5.5;

        printf("%d %d %f" , a, b, c);
    break;
      }
    case 19:
      printf("Exercicio 19: Um algoritmo que mostra 3 caracteres\n");
      {
        char ab, ac, ad;

        ab = 'A';
        ac = 'B';
        ad = 'C';

        printf("%c %c %c" , ab, ac, ad);
    break;
      }
    case 20:
      printf("Exercicio 20: Um algoritmo que mostra 1 caracter, 1 inteiro e um 1 numero real\n");
      {
        char x;
        int y;
        float z;

        x = 'M';
        y = 1000;
        z = 23.10;

      printf("%c %d %f" , x, y, z);
    break;
      }
   case 21:
      printf("Exercicio 21: Um algoritmo que mostra um 1 numero real, 1 caracter, 1 inteiro\n");
      {
        float a;
        char b;
        int c;

        a = 'Z';
        b = 10;
        c = 54.56;

        printf("%f %c %d" , a, b, c);
    break;
      }
    }
  }
return 0;
}
