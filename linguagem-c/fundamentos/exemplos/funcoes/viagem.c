#include <stdio.h>

int main() {
    float custo_gasolina, custo_alcool;

    printf("Quanto voce vai gastar de gasolina na viagem? R$ ");
    scanf("%f", &custo_gasolina);

    printf("Quanto voce vai gastar de alcool na viagem? R$ ");
    scanf("%f", &custo_alcool);

    printf("\nResultado\n");


    if (custo_gasolina < custo_alcool) {
        printf("Compensa mais ir de GASOLINA!\n");
    } else {
        printf("Compensa mais ir de ALCOOL!\n");
    }

    return 0;
}
