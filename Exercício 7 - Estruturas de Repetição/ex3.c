#include <stdio.h>

int main()
{

    int numero, impar;

    printf("Digite o numero:");
    scanf("%d", &numero);

    for (impar = 1; impar <= numero; impar += 2)
    {
        printf("%d\n", impar);
    }
}