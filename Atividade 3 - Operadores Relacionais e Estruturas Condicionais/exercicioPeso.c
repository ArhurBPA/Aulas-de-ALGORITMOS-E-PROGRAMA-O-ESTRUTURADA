#include<stdio.h>

int main(){

    float peso, pesoBase = 61;

    printf("Digite seu peso em kg");
    scanf("%f", &peso);

    if (peso >= pesoBase){
        
        printf("Seu peso esta acima de 60Kg");

    }
    else{
        printf("Seu peso esta abaixo de 60Kg");
    }
    
    
}