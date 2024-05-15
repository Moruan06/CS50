#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Obtém menor número do usuário (no mínimo 1):
    int min;
    do
    {
        min = get_int("Menor número: ");
    }
    while (min < 1);

    // Obtém maior número do usuário (tem que ser maior do que o min):
    int max;
    do
    {
        max = get_int("Maior número: ");
    }
    while (min >= max);

    int n, i, primo;

    for (i = min; i <= max; i++)
    {
        primo = 0;
        for (n = 1; n <= i; n++)
        {
            if (i % n == 0)
                primo++;
        }
        if (primo == 2)
            printf("%d\n", i);
    }
    return 0;
}
