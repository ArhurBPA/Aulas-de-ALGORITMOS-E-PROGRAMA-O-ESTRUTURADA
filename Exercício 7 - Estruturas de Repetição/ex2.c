#include <stdio.h>

int main()
{

    int numero;

    printf("Digite o numero:");
    scanf("%d", &numero);

    do
    {
        printf("%d\n", numero);
        numero--;
    }
    while (numero != 0)
        ;

    printf("0\n");
}