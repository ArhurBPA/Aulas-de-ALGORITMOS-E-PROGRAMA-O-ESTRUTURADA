#include <stdio.h>
#include <string.h>
int validarQuantidade()
{
    int quantidade;
    while (1)
    {
        printf("Quantas peças esse funcionario fabricou: ");
        if (scanf("%d", &quantidade) != 1 || quantidade < 0)
        {
            while (getchar() != '\n')
                ;
            printf("Quantidade invalida");
        }
        else
        {
            break;
        }
    }
    return quantidade;
}
float calculaSalario(int quantidade)
{
    float salario_base = 600.0;
    float adicional_produtividade = 0.0;
    if (quantidade > 50)
    {
        adicional_produtividade += (quantidade - 50) * 0.50;
    }
    if (quantidade > 80)
    {
        adicional_produtividade += (quantidade - 80) * 0.25;
    }
    float salario_total = salario_base + adicional_produtividade;
    return salario_total;
}
void mostraFinal(char nome[], float salario)
{
    printf("O salário total de %s é R$ %.2f\n", nome, salario);
}
int main()
{
    char nome[50];
    while (1)
    {
        printf("Digite o nome do funcionário (ou 'sair' para encerrar): ");
        scanf("%s", nome);
        if (strcmp(nome, "sair") == 0)
        {
            break;
        }
        int quantidade = validarQuantidade();
        float salario = calculaSalario(quantidade);
        mostraFinal(nome, salario);
    }
}