#include <stdio.h>

int main () {

    //variaveis

    int tipo, opcao, meses;

 float valorBem = 0;
float rendaMensal = 0;
float taxaJuros = 0;
float valorTotal = 0;
float parcelas = 0;

//Escolha o tipo
printf("Sistema de financiamento\n");

printf("1-  Veiculo\n");
printf("2-  Imoveis\n");

printf("Opcao: ");
scanf ("%d", &tipo);

//Dados principais 

printf("Digite o valor do bem: R$ ");
scanf("%f", &valorBem); 

printf("Digite sua renda mensal: R$ ");
scanf("%f", &rendaMensal); 

printf("Digite a quantidade de meses: ");
scanf("%d", &meses); 


//Veiculos

if (tipo == 1) {


printf("\n Escolha o veiculo: \n ");
printf("1- Caminhao \n");
printf("2- Carro \n");
printf("3- Moto\n");
printf("Opcao: ");
scanf("%d", &opcao);

taxaJuros=0.015;
 
//Caminhao

if  (opcao == 1) {

    if (meses < 100 || meses > 200) {
        printf("Prezo invalido para caminhao!\n");
        return 0;
    }
}

//Carro

else if  (opcao == 2) {

    if (meses < 6 || meses > 48) {
        printf("Prezo invalido para carro!\n");
        return 0;
    }
}

//Moto

else if  (opcao == 3) {

    if (meses < 3 || meses > 24) {
        printf("Prezo invalido para moto!\n");
        return 0;
    }
}

else {
    printf("Opcao invalida!\n");
    return 0;
}
}

//IMOVEIS

else if (tipo == 2) {


printf("\nEscolha o imovel\n");
printf("1-Casa\n");
printf("2-Apartamento\n");
printf("Opcao: ");
scanf("%d", &opcao);

printf("Quantidade de meses: ");
scanf("%d", &opcao);

taxaJuros=0.005;
 
//Casa 

if  (opcao == 1) {

    if (meses < 150|| meses > 360) {
        printf("Prazo invalido para casa!\n");
        return 0;
    }
}

//Apartamento

 else if  (opcao == 2) {

    if (meses < 100 || meses > 300) {
        printf("Prezo invalido para apartamento!\n");
        return 0;
    }
}

else {
    printf("Opcao invalida!\n");
    return 0;
}
}

else {
    printf("Tipo invalido\n");
    return 0;
}

// Calculos

valorTotal = valorBem + (valorBem * taxaJuros * meses);
parcelas = valorTotal / meses;

// Resultados

printf("Valor total: R$ %.2f\n", valorTotal);
printf("Valor da parcela: R$ %.2f\n", parcelas);


// Aprovacao

if (parcelas <= rendaMensal * 0.30) {
  
    printf("FINANCIAMENTO APROVADO!\n");

} else {
     printf("FINANCIAMENTO REPROVADO!\n");
 printf("A parcela ultrapassa 30%% da renda mensal.\n");

}

printf ("\nDesenvolvido por Jaison Gabriel\n");

return 0;

    
} 