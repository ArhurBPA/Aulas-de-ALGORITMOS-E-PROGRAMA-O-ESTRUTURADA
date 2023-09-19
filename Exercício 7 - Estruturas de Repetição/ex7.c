#include <stdio.h>
/*Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:

a) sexo (m e f);

b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

d) idade em anos.

e) valor do salário.

Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos.

*/
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
