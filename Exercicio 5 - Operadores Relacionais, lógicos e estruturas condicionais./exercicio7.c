#include<stdio.h>
int main(){
    float notaProva1, notaProva2, notaProva3;
    float mediaPonderada;

    printf("Digite a nota da primeira prova, que possue peso um:");
    scanf("%f", &notaProva1);

    printf("Digite a nota da segunda prova, que possue peso um:");
    scanf("%f", &notaProva2);

    printf("Digite a nota da terceira prova, que possue peso dois:");
    scanf("%f", &notaProva3);

    mediaPonderada = (notaProva1 * 1 + notaProva2 * 1 + notaProva3 * 2) / 4;

    if (mediaPonderada >= 7.0){
        printf("O aluno esta aprovado.");
    }else{
        printf("O aluno esta reprovado.");
    }
    

}