   /*faça um algoritmo que leia dois valores, esses valores são as resistência de dois resistores em paralelo e calcule a resistência equivalente entre eles.
   Nesse algoritmo eu pego duas variaveis do tipo int que sao chamados de x e y, e tenho tambem as operações aritméticas do tipo int multiplicar e somar.
   Primeiro eu faço a multiplicação do galor digitado pelo o usuário e depois eu faço a soma, após eu pegar o valor da multiplicação e da soma, eu divido
   um pelo o outro, que resulta na resistência equivalente, que saira em um resultado float*/

 #include<stdio.h>

    int main(){

    int x, y;
    int multiplicar, somar;
    float dividir;

    

    printf("Digite dois valores inteiros: ");
    scanf(" %d %d" , &x, &y);
    printf("\nO processo a seguir pegara esses dois valores e multiplicara, depois somar e dividir um pelo o outro\n");
    
    multiplicar=x*y;
    printf("\na multiplicação eh:%d\n", multiplicar);
    
    printf("\nsegundo processo, somar!\n");
    
    somar=x+y;
    printf("\na soma deu:%d\n", somar);
    
    
    dividir=(float)multiplicar/somar;
    
    printf("\nfazendo a resistência equivalente da:%.4f\n", dividir);
    
    
    
    return 0;
}
