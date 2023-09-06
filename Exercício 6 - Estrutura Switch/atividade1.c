#include<stdio.h>

int main(){

    int valor;

    printf("Digite o DDD correspondente a cidade que deseja:");
    scanf("%d", &valor);

    switch (valor)
    {
    case 61:
        printf("Esse DDD pertence a cidade de Brasília.\n");
        break;
    case 71:
        printf("Esse DDD pertence a cidade de Salvador.\n");
        break;
    case 11:
        printf("Esse DDD pertence a cidade de São Paulo.\n");
        break;
    case 21:
        printf("Esse DDD pertence a cidade de Rio de Janeiro.\n");
        break;
    case 32:
        printf("Esse DDD pertence a cidade de Juiz de Fora.\n");
        break;
    case 19:
        printf("Esse DDD pertence a cidade de Campinas.\n");
        break;
    case 27:
        printf("Esse DDD pertence a cidade de Vitória.\n");
        break;
    case 31:
        printf("Esse DDD pertence a cidade de Belo Horizonte.\n");
        break;
    default:
        printf("Essa e uma cidade no Brasil sem identificação.\n");
        break;
    }

}