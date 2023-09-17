#include<stdio.h>

int main(){

    int numero = 3,numeroMultiplicador = 1, resultado;


    do
    {
        resultado = numero * numeroMultiplicador;
        printf("%d",resultado);
        numeroMultiplicador  ++;

    } while (resultado < 15);
    
}