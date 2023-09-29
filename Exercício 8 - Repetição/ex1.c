#include <stdio.h>
#define capacidade 100
/*Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:

- sua idade;

- sua opinião em relação ao filme, segundo as seguintes notas:

Nota        Significado

A             Ótimo

B             Bom

C             Regular

D             Ruim

E             Péssimo

Elabore um algoritmo que, lendo estes dados, calcule e imprima:

a quantidade de respostas ótimo;
a diferença percentual entre respostas bom e regular;
a média de idade das pessoas que responderam ruim;
a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
*/
int main()
{
    int idade, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, maxIdadeRuim = -1, maxIdadeOtimo = -1, maxIdadePessimo = -1, somaIdadeRuim = 0, nota;
    for (int i = 1; i <= capacidade; i++)
    {
        printf("%d° Resposta:\n", i);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Nota:\nA              Ótimo\n\nB              Bom\n\nC              Regular\n\nD              Ruim\n\nE              Péssimo  ");
        scanf(" %i", &nota);

        switch (nota)
        {
        case 'A':
            otimo++;
            if (idade > maxIdadeOtimo)
            {
                maxIdadeOtimo = idade;
            }
            break;
        case 'B':
            bom++;
            break;
        case 'C':
            regular++;
            break;
        case 'D':
            ruim++;
            somaIdadeRuim += idade;
            if (idade > maxIdadeRuim)
            {
                maxIdadeRuim = idade;
            }
            break;
        case 'E':
            pessimo++;
            if (idade > maxIdadePessimo)
            {
                maxIdadePessimo = idade;
            }
            break;
        default:
            printf("Opinião inválida. Por favor, escolha entre A, B, C, D ou E.\n");
            i--;
            break;
        }
    }
    int diferencaEntre = bom - regular;
    double idadeResponderamRuim = somaIdadeRuim / maxIdadeRuim;
    int diferenca = maxIdadeOtimo - maxIdadeRuim;

    printf("A quantidade de respostas ótimo é: %d", otimo);
    printf("A diferença percentual entre respostas bom e regular é: %d", diferencaEntre);
    printf("A média de idade das pessoas que responderam ruim é: %.0lf", idadeResponderamRuim);
    printf("A porcentagem de respostas péssimo e a maior idade que utilizou esta opção são respectivamente: %d%% e %d", pessimo, maxIdadePessimo);
    printf("A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim é: %d", diferenca);
    
}