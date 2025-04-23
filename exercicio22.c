    #include<stdio.h>

    int main(){

    int x, y;
    int multiplicar, somar;
    float dividir;

    /*faça um algoritmo que leia dois valores, esses valores são as resistência de dois
    resistores em paralelo e calcule a resistência equivalente entre eles*/

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
