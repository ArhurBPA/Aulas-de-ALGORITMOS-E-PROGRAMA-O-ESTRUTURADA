#include<stdio.h>

int main(){

    /*Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.*/

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