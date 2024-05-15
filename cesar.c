#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funções
bool apenas_digitos(const char *s);

// Constantes
const int A = 65;
const int a = 97;
const int Z = 26;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s chave\n", argv[0]);
        return 1;
    }
    if (apenas_digitos(argv[1]))
    {
        printf("Uso: %s chave\n", argv[0]);
        return 1;
    }
    int k = atoi(argv[1]);
    string puro = get_string("Texto puro: ");
    printf("Texto cifrado: ");
    for (int i = 0, n = strlen(puro); i < n; i++)
    {
        char c = puro[i];
        if (isalpha(c))
        {
            if (isupper(c))
            {
                int maiuscula = c - A;
                printf("%c", ((maiuscula + k) % Z) + A);
            }
            else if (islower(c))
            {
                int minuscula = c - a;
                printf("%c", ((minuscula + k) % Z) + a);
            }
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    // Termina o programa
    return 0;
}

bool apenas_digitos(const char *s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            return true;
        }
    }
    return false;
}
