#include<stdio.h>

int main(){

    /* Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf("Digite o salario atual");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de rajuste");
    scanf("%f", &porcentagemReajuste);

    reajusteFinal = porcentagemReajuste/100;

    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf("Novo salario e: R$%.2f", novoSalario);


}