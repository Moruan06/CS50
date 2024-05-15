#include <stdio.h>
#include <string.h>

// Função para substituir vogais na string
void substituirVogais(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        // Verifica se o caractere é uma vogal (maiúscula ou minúscula)
        switch (str[i]) {
            case 'a':
            case 'A':
                str[i] = '6';
                break;
            case 'e':
            case 'E':
                str[i] = '3';
                break;
            case 'i':
            case 'I':
                str[i] = '1';
                break;
            case 'o':
            case 'O':
                str[i] = '0';
                break;
            case 'u':
            case 'U':
                str[i] = 'v';
                break;
            // Não faz nada se o caractere não for uma vogal
            default:
                break;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <texto>\n", argv[0]);
        return 1;
    }

    // Obtém o texto passado como argumento
    char *texto = argv[1];

    // Chama a função para substituir as vogais
    substituirVogais(texto);

    // Exibe o texto modificado
    printf("Texto com vogais substituidas: %s\n", texto);

    return 0;
}
