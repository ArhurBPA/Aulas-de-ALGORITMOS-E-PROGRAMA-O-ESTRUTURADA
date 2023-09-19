/*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/
#include <stdio.h>
int main()
{
    int A, B, C;

    printf("Entre com um valor para A:");
    scanf("%d", &A);

    printf("Entre com um valor para B:");
    scanf("%d", &B);

    printf("Entre com um valor para C:");
    scanf("%d", &C);

    if (A + B > C && B + C > A && A + C > B)
    {
       
    }
    else
    {
        printf("Não são valores validos para lados de um triangulo.");
    }
}
