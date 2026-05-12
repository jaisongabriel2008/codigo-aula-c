/*
Calcula o imc
de uma pessoa
com valores 
fixos nas variáves
e mostre o valor 
ao final
*/

#include <stdio.h>

int main() {
    float peso = 90;
    float altura = 1.65;

    printf("Ola vamos calcular o IMC \n");

    float resultado = peso / (altura * altura);

    printf("O IMC e %f", resultado);

    return 0;
}