#include<stdio.h>

int main(){
    int idade, tempoDeServico;

    printf("Digite qual sua idade:");
    scanf("%d", &idade);
    printf("Digite quanto tempo de servico voce possue:");
    scanf("%d", &tempoDeServico);
    
    if ((idade >= 65) || (tempoDeServico >= 30 ) || ( idade >= 60 && tempoDeServico >= 25)){
        printf("Voce esta apto a se aposentar.");
    }else{
        printf("Voce ainda nao esta apto a se aposentar.");
    }
    
}