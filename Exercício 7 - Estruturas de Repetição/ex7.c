#include <stdio.h>

int main()
{
    char sexo, olhos, cabelos;
    int idade, salario;
    int somatorioGeral = 0, somatorio = 0;

    do
    {
        printf("Sexo:\n    (m) para (Masculino); \n    (f) para (feminino);\n");
        printf("_________________\n");
        scanf(" %c", &sexo);
        fflush(stdin);
        printf("_________________\n");

        printf("Cor dos olhos:\n    (a) para (azuis);\n    (v) para (verdes);\n    (c) para (castanhos);\n    (p) para(pretos);\n");
        printf("_________________\n");
        fflush(stdin);
        scanf(" %c", &olhos);
        fflush(stdin);
        printf("_________________\n");

        printf("Cor dos cabelos:\n    (l) para (loiros);\n    (c) para (castanhos);\n    (p) para (pretos);\n    (r) para (ruivos);\n");
        printf("_________________\n");
        fflush(stdin);
        scanf(" %c", &cabelos);
        fflush(stdin);
        printf("_________________\n");

        printf("Idade em anos:\n");
        printf("_________________\n");
        scanf("%d", &idade);
        fflush(stdin);
        printf("_________________\n");

        printf("Valor do salário:\n");
        printf("_________________\n");
        scanf("%d", &salario);
        fflush(stdin);
        printf("_________________\n\n\n\n\n");

        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c')
        {
            somatorio++;
        }

        somatorioGeral++;
    } while (idade != -1);

    float porcentagem = ((float)somatorio / somatorioGeral) * 100;

    printf("O somatório geral é %d\n", somatorioGeral);
    printf("A porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos é: %.2f%%\n", porcentagem);
}
