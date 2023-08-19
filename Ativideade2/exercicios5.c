#include<stdio.h>

int main(){

    float custo, frete, despesa, valorBruto, valorVenda, lucro;

    printf("Digite o custo do produto");
    scanf("%f", &custo);

    printf("Digite o frete do produto");
    scanf("%f", &frete);

    printf("Digite as despesas do produto");
    scanf("%f", &despesa);

    valorBruto = custo + frete + despesa;

    printf("O valor do produto e: R$%.2f. Digite o valor da venda", valorBruto);
    scanf("%f", &valorVenda);

    lucro = ((valorVenda - valorBruto) * 100) /valorBruto;

    printf("Sua porcentagem de lucro e: %.2f%%\n",lucro);
    
}