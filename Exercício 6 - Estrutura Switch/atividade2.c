#include<stdio.h>

int main(){
    int quantidade, codigoDoProduto;
    float cachorroQuente = 10.10, bauruSimples = 8.30, bauruOvo = 8.50, hamburguer = 12.50, cheeseburguer = 13.25, totalPagar;
    printf("Digite o codigo do produto:");
    scanf("%d", &codigoDoProduto);
    
    printf("Digite a quatidade de unidades:");
    scanf("%d", &quantidade);

    switch (codigoDoProduto)
    {
    case 100:
        totalPagar = quantidade * cachorroQuente;
        printf("Voce pediu %d cada um custa R$%.2f o total a pagar e %.2f", quantidade, cachorroQuente, totalPagar);
        break;
    case 101:
        totalPagar = quantidade * bauruSimples;
        printf("Voce pediu %d cada um custa R$%.2f o total a pagar e %.2f", quantidade, bauruSimples, totalPagar);
        break;
    case 102:
        totalPagar = quantidade * bauruOvo;
        printf("Voce pediu %d cada um custa R$%.2f o total a pagar e %.2f", quantidade, bauruOvo, totalPagar);
        break;
    case 103:
        totalPagar = quantidade * hamburguer;
        printf("Voce pediu %d cada um custa R$%.2f o total a pagar e %.2f", quantidade, hamburguer, totalPagar);
        break;
    case 104:
        totalPagar = quantidade * cheeseburguer;
        printf("Voce pediu %d cada um custa R$%.2f o total a pagar e %.2f", quantidade, cheeseburguer, totalPagar);
        break;
    default:
        printf("Nenhum produto cadrastado com esse codigo.");
        break;
    }
}