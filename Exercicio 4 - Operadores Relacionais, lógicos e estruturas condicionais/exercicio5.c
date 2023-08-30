#include<stdio.h>

int main(){
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    if (numero == 5){
        printf("Esse numero e igual a 5");
    }if (numero == 200){
        printf("Esse numero e igual a 200");
    }if (numero == 400){
        printf("Esse numero e igual a 400");
    }if ((numero > 500) && (numero < 1000)){
        printf("Este numero esta no intervalo entre 500 e 1000");
    }if ((numero != 5)||(numero!=200)||(numero!=400)||(numero < 500)||(numero > 1000)){
        printf("Este numero nao esta em nenhum dos escopos");
    }

}