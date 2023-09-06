#include <stdio.h>

int main(){

    char nome[30];
    int idade;
    char matricula[30];
    char endereco[50];
    char curso[20];
    int periodo;
    char disciplinas[60];

    printf("_________________\n");
    printf("Cadastro do Aluno\n");
    printf("_________________\n\n");
    printf("Fale o seu nome: ");
    fgets(nome,30,stdin);

    printf("Fale sua idade: ");
    scanf("%d", &idade);  
    
    fflush(stdin);
    printf("Digite sua matricula:\n ");
    fgets(matricula,30,stdin);
    fflush(stdin);
    printf("Digite seu endereco:\n ");
    fgets(endereco,50,stdin);
    fflush(stdin);
    printf("Digite seu curso: ");
    fgets(curso,20,stdin);
    fflush(stdin);
    printf("Digite qual seu periodo: ");
    fflush(stdin);
    scanf("%d", &periodo);

    fflush(stdin);
    printf("Digite suas disciplinas: ");
    fgets(disciplinas,60,stdin);

    printf("______________\n");
    printf("Dados do Aluno\n");
    printf("______________\n\n");

    printf("Voce se chama %s" ,nome);
    printf("Sua idade e %i\n" ,idade);
    printf("Sua matricula %s" ,matricula);
    printf("Seu endereco e %s" ,endereco );
    printf("O curso que voce esta fazendo %s\n" ,curso);
    printf("Esta no periodo %d" ,periodo);
    printf("Suas diciplinas sao %s" ,disciplinas);

    return 0;

}