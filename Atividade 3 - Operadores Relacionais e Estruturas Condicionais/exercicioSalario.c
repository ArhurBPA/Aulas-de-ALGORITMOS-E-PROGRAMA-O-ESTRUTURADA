#include<stdio.h>

int main(){ 
    
    float salario,salarioMinimo;

    salarioMinimo = 1.320;

    printf("Digite seu salario atual:\n");
    scanf("%f", &salario);

    if (salario > salarioMinimo)
    {
        printf("Seu salario e maior que um salario minimo");
       
    }
    else{
        
        printf("seu salario menor que o minimo");


    }
    


}