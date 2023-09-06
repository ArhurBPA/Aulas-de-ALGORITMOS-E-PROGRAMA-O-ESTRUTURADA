#include<stdio.h>

int main(){

    /*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/

    float salarioFixo, numeroVendas, valorVendas, valorPorCarro, salarioFinal;

    printf("Quantos carros foram vendidos:");
    scanf("%f", &numeroVendas);

    printf("Quanto em R$ vendeu:");
    scanf("%f", &valorVendas);

    printf("Insira o salario:");
    scanf("%f", &salarioFixo);

    printf("Digite o valor que recebe por carro vendido:");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (valorPorCarro * numeroVendas) + (valorVendas * 5/100);

    printf("O salario final deste funcionario e : R$%.2f", salarioFinal);

}