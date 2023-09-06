#include<stdio.h>

int main(){

    /*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.*/

    int anos, meses, dias, idadeDias;

    printf("Digite a sua idade em anos, meses e dias\n");
    scanf("%d %d %d", &anos, &meses, &dias);

    idadeDias = (anos * 365) + (meses * 30) + (dias);

    printf("Voce ja viveu %d dias", idadeDias);


}