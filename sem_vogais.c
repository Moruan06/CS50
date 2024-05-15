#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Funções
void trocas(char *palavra);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s palavra\n", argv[0]);
        return 1;
    }
    char *palavra = argv[1];
    trocas(palavra);
    printf("%s\n", palavra);
    return argc;
}

void trocas(char *palavra)
{
    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        switch (palavra[i])
        {
            case 'a':
                palavra[i] = '6';
                break;
            case 'e':
                palavra[i] = '3';
                break;
            case 'i':
                palavra[i] = '1';
                break;
            case 'o':
                palavra[i] = '0';
                break;
            case 'u':
                palavra[i] = 'v';
                break;
            default:
                break;
        }
    }
}
