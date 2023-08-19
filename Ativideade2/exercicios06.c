#include<stdio.h>
#include<math.h>


int main(){

    /* Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. */

    double raio, area, PI = 3.14159265358979323846;

    printf("Digite o valor do raio");
    scanf("%lf", &raio);

    //area = PI * (raio * raio);
    area = PI *(pow(raio, 2));

    printf("A area do circulo e: %lf\n", area);
    

}