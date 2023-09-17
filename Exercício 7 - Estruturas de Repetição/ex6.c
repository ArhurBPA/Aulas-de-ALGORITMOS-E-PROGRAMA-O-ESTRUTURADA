#include <stdio.h>

int main()
{
    int numeroControle, quantidadeABACAXI = 0, quantidadeMAÇA = 0, quantidadePERA = 0, total;

    do
    {
        printf("Digite o numero para selecionar a fruta desejada\n1 => ABACAXI – 5,00 a unidade\n2 => MAÇA – 1,00 a unidade\n3 => PERA – 4,00 a unidade\n4 => Finalizar compras\n");
        scanf("%d", &numeroControle);
        
        switch (numeroControle)
        {
        case 1:
            quantidadeABACAXI++;
            break;
        case 2:
            quantidadeMAÇA++;
            break;
        case 3:
            quantidadePERA++;
            break;
        case 4:
            break;

        default:
            printf("Você selecionou uma opção invalida");
            break;
        }
    } while (numeroControle != 4);

    total = (quantidadeABACAXI * 5) + (quantidadeMAÇA) + (quantidadePERA * 4);

    printf("O total da sua compra é:%d\n", total);
}