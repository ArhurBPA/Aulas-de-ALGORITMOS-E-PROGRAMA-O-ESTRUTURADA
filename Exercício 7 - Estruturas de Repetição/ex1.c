#include <stdio.h>

int main()
{

    int numero, help = 0;

    printf("Digite o numero:");
    scanf("%d", &numero);

    do
    {
        printf("%d\n", help);
        help ++;
    } while (help <= numero);
}