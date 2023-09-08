#include<stdio.h>
#include<math.h>

int main(){
    int numero;
    double resultadoDaRaiz, resultadoDaPotencia;
    printf("Digite um numero\n");
    scanf("%d", &numero);

    if (numero >= 0){

        resultadoDaRaiz = sqrt(numero);
        printf("A raiz quadrada do numero e :%.3lf", resultadoDaRaiz);

    } 
    else{
        resultadoDaPotencia = numero * numero;
        printf("A potencia do numero e:%.0lf", resultadoDaPotencia);

    }
    


}