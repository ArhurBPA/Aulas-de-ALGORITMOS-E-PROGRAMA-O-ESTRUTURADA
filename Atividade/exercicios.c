#include<stdio.h>

main(){
    
    char nome[30];
    char idade[10];
    char matricula[17];
    char endereco[30];
    char curso[17];
    char periodo[20];
    char diciplinas[100];

    printf("Digite seu nome e sua idade: \n");
    fgets(nome, 30, stdin);
    fgets(idade, 10, __stdinp);

    printf("Agora sua matricula:\n");
    fgets(matricula, 17, stdin);
    fflush(stdin);

    printf("Digite o seu endereco:\n");
    fgets(endereco, 30, stdin);

    printf("Qual curso voce esta fazendo e em qual peiodo vc esta?\n");
    fgets(curso, 17, stdin);
    fflush(stdin);
    fgets(periodo, 20, stdin);
    fflush(stdin);

    printf("Quais diciplinas voce possue?\n");
    fgets(diciplinas, 100, stdin);
    fflush(stdin);

    printf("\n\n\nEntao certo. Consegui captar as seguintes informacoes: Seu nome e %s e voce tem %s anos de idade sua matricula e %s. Voce mora no endereco %s. Que legal seu curso e %s voce esta no %s e essas sao suas seguintes diciplinas: %s \n\n\n", nome, idade, matricula, endereco, curso, periodo, diciplinas);

}