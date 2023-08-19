#include<stdio.h>

int main(){

    /*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor*/

    float custoCarro, valorFinal;

    printf("Digite o custo de fabrica do carro");
    scanf("%f", &custoCarro);

    valorFinal = (custoCarro * 28/100) + (custoCarro * 45/100) + (custoCarro);

    printf("O custo final do carro e: R$%.2f", valorFinal);


}