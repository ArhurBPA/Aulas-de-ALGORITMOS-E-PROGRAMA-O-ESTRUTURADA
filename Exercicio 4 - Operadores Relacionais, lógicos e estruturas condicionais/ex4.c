#include <stdio.h>

int main() {
    int A, B, C;
    int ajudante;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    if (C > A){
        ajudante = C;
        C = A;
        A = ajudante;
    }if (B > A){
        ajudante = B;
        B = A;
        A = ajudante;  
    }if (C > B){
        ajudante = C;
        C = B;
        B = ajudante;
    }
    
    printf("Valores em ordem descendente: %d, %d, %d\n", A, B, C);


}