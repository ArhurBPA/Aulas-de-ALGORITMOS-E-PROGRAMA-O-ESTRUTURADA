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
    
    if (A > C){
        ajudante = A;
        A = C;
        C = ajudante;
    }if (A > B){
        ajudante = A;
        A = B;
        B = ajudante;  
    }if (B > C){
        ajudante = B;
        B = C;
        C = ajudante;
    }
    
    printf("Valores em ordem ascendente: %d, %d, %d\n", A, B, C);

    return 0;
}
