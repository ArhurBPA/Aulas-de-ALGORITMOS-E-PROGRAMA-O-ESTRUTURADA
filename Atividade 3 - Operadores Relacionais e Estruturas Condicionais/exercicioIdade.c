#include<stdio.h>
#include<math.h>

int main(){

    int idade;

    printf("Digite sua idade para verificarmos se você de maior:\n");
    scanf("%i", &idade);

    if ( idade >= 18){

        printf("Pela sua idade, você possui maioridade!\n");

    }
    else{

        printf("Pela sua idade você não possui maioridade!\n");

    }
    
    


}