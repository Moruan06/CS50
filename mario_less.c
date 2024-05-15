#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, p, j;
    do
    {
        printf("Altura: ");
        scanf("%d", &a);
    }
    while (a >= 9 || a <= 0);
    for (p = 1; p <= a; p++)
    {
        for (j = a - p; j >= 1; j--)
            printf(" ");
        for (j = 1; j <= p; j++)
            printf("#");
        printf("\n");
    }
    return 0;
}
