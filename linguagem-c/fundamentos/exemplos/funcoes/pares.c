
#include <stdio.h>

int main() {
    //Variavel 
    int numero_inicio = 0;
    int numero_fim = 0;
    int contador = 0;
   
    // Perguntas 
    printf("Digite o numero inicial: ");
    scanf("%d", &numero_inicio);

    printf("Digite o numero final: ");
    scanf("%d", &numero_fim);

    printf("\n Numeros pares encontrados\n");

    for (contador = numero_inicio; contador <= numero_fim; contador++) {
        if (contador % 2 == 0) {
            printf("Achei um par: %d\n", contador);
        }
    }

    printf("\nPronto, todos os pares mostrados!\n");

    return 0;
}