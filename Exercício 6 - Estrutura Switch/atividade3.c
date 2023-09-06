#include<stdio.h>

int main (){
    int prato, sobremesa, bebida, totalDeCalorias;

    printf("Escolha o numero do prato:\n1 - vegetariano\n2 – Peixe\n3 – Frango\n4 – Carne\n");
    scanf("%d", &prato);

    printf("Ecolha qual o numero da sobremesa:\n1 – Abacaxi\n2 – Sorvete diet\n3 – Mouse diet\n4 – Mouse chocolate\n");
    scanf("%d", &sobremesa);

    printf("Escolha qual numero da bebida:\n1 – Chá\n2 - Suco de laranja\n3 – Suco de melão\n4 – Refrigerante diet\n");
    scanf("%d", &bebida);

    switch (prato)
    {
    case 1:
        switch (sobremesa)
        {
        case 1:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 180+75+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 180+75+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 180+75+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 180+75+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 180+110+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 180+110+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 180+110+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 180+110+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 3:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 180+170+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 180+170+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 180+170+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 180+170+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 180+200+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 180+200+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 180+200+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 180+200+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (sobremesa)
        {
        case 1:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 230+75+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 230+75+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 230+75+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 230+75+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 230+110+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 230+110+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 230+110+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 230+110+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 3:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 230+170+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 230+170+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 230+170+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 230+170+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 230+200+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 230+200+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 230+200+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 230+200+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (sobremesa)
        {
        case 1:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 250+75+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 250+75+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 250+75+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 250+75+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 250+110+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 250+110+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 250+110+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 250+110+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 3:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 250+170+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 250+170+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 250+170+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 250+170+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 250+200+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 250+200+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 250+200+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 250+200+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        
        default:
            break;
        }
        break;
    case 4:
        switch (sobremesa)
        {
        case 1:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 350+75+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 350+75+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 350+75+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 350+75+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 350+110+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 350+110+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 350+110+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 350+110+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 3:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 350+170+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 350+170+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 350+170+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 350+170+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (bebida)
            {
            case 1:
                totalDeCalorias = 350+200+20;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 2:
                totalDeCalorias = 350+200+70;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 3:
                totalDeCalorias = 350+200+100;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            case 4:
                totalDeCalorias = 350+200+65;
                printf("O total de caoliras e %dcal\n", totalDeCalorias);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}