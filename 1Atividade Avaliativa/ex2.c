#include <stdio.h>

int main()
{
    float alturaChico = 1.50, alturaZe = 1.10;
    int anos = 0;
    
    while (alturaChico > alturaZe)
    {
        alturaChico += 0.02;
        alturaZe += 0.03;
        anos++;
    }

    printf("Daqui a %d anos Chico e Zé terão a mesma altura.", anos);
}
