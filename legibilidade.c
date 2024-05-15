#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

const int PORCENTO = 100;
const float N1 = 0.0588;
const float N2 = 0.296;
const float N3 = 15.8;

int contar_letras(string texto);
int contar_palavras(string texto);
int contar_frases(string texto);
int grau(int letras, int palavras, int frase);

int main(void)
{
    string texto = get_string("Texto: ");
    int letras = contar_letras(texto);
    int palavras = contar_palavras(texto);
    int frase = contar_frases(texto);

    if (grau(letras, palavras, frase) < 1)
    {
        printf("Abaixo do grau 1\n");
    }
    else if (grau(letras, palavras, frase) == 1)
    {
        printf("Grau 1\n");
    }
    else if (grau(letras, palavras, frase) == 2)
    {
        printf("Grau 2\n");
    }
    else if (grau(letras, palavras, frase) == 3)
    {
        printf("Grau 3\n");
    }
    else if (grau(letras, palavras, frase) == 4)
    {
        printf("Grau 4\n");
    }
    else if (grau(letras, palavras, frase) == 5)
    {
        printf("Grau 5\n");
    }
    else if (grau(letras, palavras, frase) == 6)
    {
        printf("Grau 6\n");
    }
    else if (grau(letras, palavras, frase) == 7)
    {
        printf("Grau 7\n");
    }
    else if (grau(letras, palavras, frase) == 8)
    {
        printf("Grau 8\n");
    }
    else if (grau(letras, palavras, frase) == 9)
    {
        printf("Grau 9\n");
    }
    else if (grau(letras, palavras, frase) == 10)
    {
        printf("Grau 10\n");
    }
    else if (grau(letras, palavras, frase) == 11)
    {
        printf("Grau 11\n");
    }
    else if (grau(letras, palavras, frase) == 12)
    {
        printf("Grau 12\n");
    }
    else if (grau(letras, palavras, frase) == 13)
    {
        printf("Grau 13\n");
    }
    else if (grau(letras, palavras, frase) == 14)
    {
        printf("Grau 14\n");
    }
    else if (grau(letras, palavras, frase) == 15)
    {
        printf("Grau 15\n");
    }
    else if (grau(letras, palavras, frase) >= 16)
    {
        printf("Grau 16+\n");
    }

    return 0;
}

int contar_letras(string texto)
{
    int letras = 0;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (isalpha(texto[i]))
        {
            letras++;
        }
    }
    return letras;
}

int contar_palavras(string texto)
{
    int palavras = 1;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (texto[i] == ' ')
        {
            palavras++;
        }
    }
    return palavras;
}

int contar_frases(string texto)
{
    int frase = 0;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (texto[i] == '.')
        {
            frase++;
        }
        else if (texto[i] == '!')
        {
            frase++;
        }
        else if (texto[i] == '?')
        {
            frase++;
        }
    }
    return frase;
}

int grau(int letras, int palavras, int frase)
{
    float L = ((float) letras / (float) palavras) * PORCENTO;
    float S = ((float) frase / (float) palavras) * PORCENTO;
    float Calculo = (N1 * L) - (N2 * S) - N3;
    int Grau = round(Calculo);

    return Grau;
}
