#include <cs50.h>
#include <stdio.h>
int main()
{
    int c, p;
    int n = get_int("Você quer a tabuada de qual número? ");
    int i = get_int("Você quer começar a tabuada em qual número? ");
    int f = get_int("Você quer terminar a tabuada em qual número? ");
    if (f > 10 || f < 1 || i > 10 || i < 0 || f < i)
    {
        printf("Erro na especificação da tabuada.\n");
    }
    else
    {
        if (n <= 99 && n >= 1)
        {
            for (p = i; p <= f; p++)
            {
                c = n * p;
                printf("%d x %d = %d\n", n, p, c);
            }
        }
    }
    return 0;
}
