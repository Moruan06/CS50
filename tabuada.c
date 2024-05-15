#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, c;
    int n = get_int("Você quer a tabuada de qual número? ");
    if (n <= 99 && n >= 1)
    {
        for (i = 0; i <= 10; i++)
        {
            c = n * i;
            printf("%d x %d = %d\n", n, i, c);
        };
    };
    return 0;
}
