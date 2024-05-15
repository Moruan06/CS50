#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cs50.h>

//constantes
const float MIN_PESO = 40.00;
const float MAX_PESO = 200.00;
const float MIN_ALTURA = 1.39;
const float MAX_ALTURA = 2.49;

int main(void)
{
    float p;
    do{
       p = get_float("Informe seu peso (kg): ");
    }while(p<MIN_PESO || p>MAX_PESO);

    float a;
    do{
       a = get_float("Informe sua altura (m): ");
    }while(a<MIN_ALTURA || a>MAX_ALTURA);

    float imc;
    imc=p/pow(a, 2); //calculo de imc

    if(imc<=16){
        printf("IMC: %.2f;\nClassificação: Magreza grau III.\n", imc);
    }
    if(imc<=17 && imc>16){
        printf("IMC: %.2f;\nClassificação: Magreza II.\n", imc);
    }
    if(imc<=18.5 && imc>17){
        printf("IMC: %.2f;\nClassificação: Magreza I.\n", imc);
    }
    if(imc<=25 && imc>18.5){
        printf("IMC: %.2f;\nClassificação: Peso adequado.\n", imc);
    }
    if(imc<=30 && imc>25){
        printf("IMC: %.2f;\nClassificação: Pré-obeso.\n", imc);
    }
    if(imc<=35 && imc>30){
        printf("IMC: %.2f;\nClassificação: Obesidade grau I.\n", imc);
    }
    if(imc<40 && imc>35){
        printf("IMC: %.2f;\nClassificação: Obesidade grau II.\n", imc);
    }
    if(imc>=40 ){
        printf("IMC: %.2f;\nClassificação: Obesidade grau III.\n", imc);
    }
    return 0;
}

