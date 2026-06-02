#include <stdio.h>

int main() {
    int dias;

    printf("Quantos dias voce quer treinar por semana? ");
    scanf("%d", &dias);

    printf("\nOpcao disponivel\n");

    // treinar ate 3 dias
    if (dias <= 3) {
        printf("-> Viva Saude: R$ 39,99/mes (Total: R$ 479,88 por ano)\n");
    }

    // treinar ate 4 dias
    if (dias <= 4) {
        printf("-> Saude em Dia: R$ 48,99/mes (Total: R$ 587,88 por ano)\n");
    }

    // A Fitness Pro sempre atende, pois nao tem limite de dias
    printf("-> Fitness Pro: R$ 58,99/mes (Total: R$ 707,88 por ano)\n");

    return 0;
}