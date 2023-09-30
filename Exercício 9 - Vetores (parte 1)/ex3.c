#include<stdio.h>

int main(){
    int A[10], B[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite os numeros");
        scanf("%d", &A[i]);

        B[i] = A[i] * A[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d] = %d. B[%d] = %d\n", i, A[i], i, B[i]);
    }
    
    

}