#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Constantes
const int BITS_NO_BYTE = 8;

// Funções
void imprimir_lampada(int bit);

int main(void)
{
    int bit[BITS_NO_BYTE];
    string msg = get_string("Mensagem a ser codificada: ");
    for (int i = 0, n = strlen(msg); i < n; i++)
    {
        unsigned char ASCII = msg[i];
        // Zera as variaveis
        int m = 0;
        for (int k = 0; k < BITS_NO_BYTE; k++)
        {
            bit[k] = 0;
        }
        // Calcula o valor binário
        while (ASCII != 0)
        {
            bit[m] = ASCII % 2;
            m++;
            ASCII = ASCII / 2;
        }
        // Imprime as lampadas de traz pra frente
        for (int j = BITS_NO_BYTE - 1; j >= 0; j--)
        {
            imprimir_lampada(bit[j]);
        }
        printf("\n");
    }
    return 0;
}

void imprimir_lampada(int bit)
{
    if (bit == 0)
    {
        // Emoji que representa uma lâmpada apagada
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Emoji que representa uma lâmpada acessa
        printf("\U0001F7E1");
    }
}
