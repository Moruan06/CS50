#include <cs50.h>
#include <stdio.h>

#define MAXIMO_COMIDA 999.99
#define MAXIMO_IMPOSTOS 100.00
#define MAXIMO_GORJETA 10
#define MINIMO_COMIDA 10.00
int main(void)
{

    float comida, impostos, i = 0.00, v = 0.00, vt = 0.00, vf = 0.00, g = 0.00;
    int gorjeta;

    do
    {
        comida = get_float("Valor da comida: ");
    }
    while (comida < MINIMO_COMIDA || comida > MAXIMO_COMIDA);
    do
    {
        impostos = get_float("Porcentagem de impostos: ");
    }
    while (impostos < 0.00 || impostos > MAXIMO_IMPOSTOS);
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > MAXIMO_GORJETA);

    // Contas
    i = impostos / 100 + 1;
    v = comida * i;
    g = (float) gorjeta / 100 + 1;
    vt = v * g;
    vf = vt / 2;

    printf("Cada um pagará R$ %.2f!\n", vf);

    return 0;
}
