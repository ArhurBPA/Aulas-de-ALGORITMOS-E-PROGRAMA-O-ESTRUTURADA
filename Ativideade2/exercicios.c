#include<stdio.h>

int main(){

    /*Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.*/

    int num1, num2, soma, mult, sub;
    float  div;

    //entrada de dados
    printf("Digite o primeiro numero");
    scanf("%d", &num1);

    printf("Digite o segundo numero");
    scanf("%d",&num2);

    //operações matematicas

    soma = num1 + num2;
    mult = num1 *  num2;
    sub = num1 - num2;
    div = (float)num1 / num2;

    //printar os resultados 

    printf("Soma: %d\n", soma);

    printf("Multiplicacao: %d\n", mult);

    printf("Subitracao:%d\n", sub);

    printf("Divisao:%f",div);

}