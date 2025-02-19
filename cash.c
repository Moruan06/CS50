#include <cs50.h>
#include <stdio.h>

// Indicação das funções para a main:
int get_troco(void);
int calcular_moedas50(int troco);
int calcular_moedas25(int troco);
int calcular_moedas10(int troco);
int calcular_moedas05(int troco);
int calcular_moedas01(int troco);

//Constantes
int main(void)
{
    // Pergunta para o usuário qual o valor total do troco, em centavos:
    int troco = get_troco();

    // Calcula o número de moedas de 50 centavos a serem dadas ao cliente:
    int moedas50 = calcular_moedas50(troco);
    troco = troco - moedas50 * 50;

    // Calcula o número de moedas de 25 centavos a serem dadas ao cliente:
    int moedas25 = calcular_moedas25(troco);
    troco = troco - moedas25 * 25;

    // Calcula o número de moedas de 10 centavos a serem dadas ao cliente:
    int moedas10 = calcular_moedas10(troco);
    troco = troco - moedas10 * 10;

    // Calcula o número de moedas de 5 centavos a serem dadas ao cliente:
    int moedas05 = calcular_moedas05(troco);
    troco = troco - moedas05 * 5;

    // Calcula o número de moedas de 1 centavo a serem dadas ao cliente:
    int moedas01 = calcular_moedas01(troco);
    troco = troco - moedas01;

    // Quantidade total otimizada de moedas:
    int moedas = moedas50 + moedas25 + moedas10 + moedas05 + moedas01;

    // Imprime a quantidade total de moedas:
    printf("São necessárias %i moedas para dar o troco certo\n", moedas);

    return 0;
}





int get_troco(void)
{
    int troco;
    do{
        troco = get_int ("Informe o troco devido (em centavos): ");
    }while(troco < 0);
    return troco;
}

int calcular_moedas50(int troco)
{
    int moedas50 = 0;
    while(troco >= 50){
        troco-=50;
        moedas50++;
    }
    return moedas50;
}

int calcular_moedas25(int troco)
{
    int moedas25 = 0;
    while(troco >= 25){
        troco-=25;
        moedas25++;
    }
    return moedas25;
}

int calcular_moedas10(int troco)
{
    int moedas10 = 0;
    while(troco >= 10){
        troco-=10;
        moedas10++;
    }
    return moedas10;
}

int calcular_moedas05(int troco)
{
    int moedas05 = 0;
    while(troco >= 5){
        troco-=5;
        moedas05++;
    }
    return moedas05;
}

int calcular_moedas01(int troco)
{
    int moedas01 = 0;
    while(troco >= 1){
        troco-=1;
        moedas01++;
    }
    return moedas01;
}

