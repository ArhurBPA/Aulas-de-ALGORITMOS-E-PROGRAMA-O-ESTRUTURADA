#include<stdio.h>

int main(){

    float altura, alturaBase = 1.81;

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    if (altura >= alturaBase){

        printf("Sua altura e maior que 1.80");

    }
    else
    {
        printf("Sua altura e menor que 1.80");
    }
    
    

}