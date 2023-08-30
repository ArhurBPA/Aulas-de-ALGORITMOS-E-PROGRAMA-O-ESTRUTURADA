#include<stdio.h>

int main(){
    int numero, bolean;

    printf("Digite um numero:");
    scanf("%d", &numero);

    if (numero == 5){
        printf("Esse numero e igual a 5\n");
    }if (numero == 200){
        printf("Esse numero e igual a 200\n");
    }if (numero == 400){
        printf("Esse numero e igual a 400\n");
    }if ((numero > 500) && (numero < 1000)){
        printf("Este numero esta no intervalo entre 500 e 1000\n");
    }
    bolean = numero == 5 || numero == 200 || numero == 400 || ((numero > 500) && (numero < 1000));
    if (bolean == 0){
        printf("Este numero nao esta em nenhum dos escopos\n");
    }

}