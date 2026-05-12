/*
Você precisa comprar um carro e 
pretender realizar o pagamento de
forma parcelada.
Crie um algoritmo que calcule o valor
das parcelas descontando a o valor
da entrada de 30%.
*/
#include <stdio.h>

int main() {
    // Entrada
    float valorCarro = 0;
    int qtdeParcelas = 0;
    const float entrada30 = 0.30;

    printf("Qual valor do carro?");
    scanf("%f", &valorCarro);

    printf("Quantas parcelas deseja pagar?");
    scanf("%i", &qtdeParcelas);

    // Processamento
    float valorEntrada = valorCarro * entrada30;
    float valorPagar = valorCarro - valorEntrada;
    float valorParcela = valorPagar / qtdeParcelas;

    // Saída
    printf("Valor carro R$ %.2f \n", valorCarro);
    printf("Valor da entrada R$ %.2f \n", valorEntrada);
    printf("Valor a pagar R$ %.2f \n", valorPagar);
    printf("%i parcelas de R$ %.2f", qtdeParcelas, valorParcela);

    return 0;
}