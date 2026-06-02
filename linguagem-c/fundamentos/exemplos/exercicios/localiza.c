#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;

    char nome[30];
    char carro[30];
    char cupons[3][10] = {
        "WOF_30",
        "WOF_20",
        "WOF_10"
    };

    char cupomUsuario[10];

    float totalPorKm = 0;
    float totalPorDia = 0;
    float totalFinal = 0;

    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("Olá, seja bem-vindo!\n");
    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("\nObrigado por escolher nossa loja, %s!\n", nome);

    printf("Qual carro deseja alugar? ");
    scanf("%s", carro);

    printf("\nQuantos KM você vai rodar com o carro? ");
    scanf("%i", &km);

    printf("Quantos dias vai precisar do carro? ");
    scanf("%i", &dias);

    totalPorKm = km * VALOR_POR_KM;
    totalPorDia = dias * VALOR_POR_DIA;

    if (totalPorDia < totalPorKm) {
        totalFinal = totalPorDia;
        printf("\nSugerimos usar o plano por DIA.");
    } else {
        totalFinal = totalPorKm;
        printf("\nSugerimos usar o plano por KM.");
    }

    printf("\n\nDigite um cupom de desconto: ");
    scanf("%s", cupomUsuario);

    if(strcmp(cupomUsuario, cupons[0]) == 0){
        totalFinal = totalFinal - (totalFinal * 0.30);
        printf("\nCupom de 30%% aplicado!");
    }
    else if(strcmp(cupomUsuario, cupons[1]) == 0){
        totalFinal = totalFinal - (totalFinal * 0.20);
        printf("\nCupom de 20%% aplicado!");
    }
    else if(strcmp(cupomUsuario, cupons[2]) == 0){
        totalFinal = totalFinal - (totalFinal * 0.10);
        printf("\nCupom de 10%% aplicado!");
    }
    else{
        printf("\nCupom inválido!");
    }

    printf("\n\n===== RELATÓRIO =====");
    printf("\nCliente: %s", nome);
    printf("\nCarro escolhido: %s", carro);
    printf("\nKM rodados: %i", km);
    printf("\nDias alugados: %i", dias);
    printf("\nValor final: R$ %.2f", totalFinal);

    printf("\n\nTenha uma ótima tarde!");
    printf("\nDesenvolvido por Jaison Gabriel");

    return 0;
}