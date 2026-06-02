
#include <stdio.h>
#include <locale.h>


void calcular_valores(int tipo_calculo, float valor1, float valor2) {
    float total = 0;

    switch (tipo_calculo) {
        
        case 1:
            total = valor1 + valor2;
            printf("\nResultado da Adição: %.2f\n", total);
            break;
            
     
            case 2:
            total = valor1 - valor2;
            printf("\nResultado da Subtração: %.2f\n", total);
            break;
            
        
            case 3:
            total = valor1 * valor2;
            printf("\nResultado da Multiplicaçao: %.2f\n", total);
            break;
            
       
            case 4:
            if (valor2 == 0) {
                printf("\nErro: Não é possível dividir por zero\n");
            } else {
                total = valor1 / valor2;
                printf("\nResultado da Divisão: %.2f\n", total);
            }
            break;
            
        default:
            printf("\nOpção inválida! Nenhuma operação foi realizada.\n");
            break;
    }
}


int main() {
  
    // variáveis locais da main com novos nomes
    int codigo_op = 0;
    float n1 = 0.0, n2 = 0.0;

    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Calculdora\n");
    printf("[1] Adição\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("Escolha uma opção: ");
    scanf("%i", &codigo_op);

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

  //calcular
    calcular_valores(codigo_op, n1, n2);

    return 0;
}