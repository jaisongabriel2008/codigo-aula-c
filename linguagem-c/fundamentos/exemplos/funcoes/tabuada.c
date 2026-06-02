#include <stdio.h>


void mostrar_tabuada(int numero, int inicio, int fim) {
    
    
   
    for (int i = inicio; i <= fim; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
}

int main() {
    
    mostrar_tabuada(2, 8, 12);
    
    return 0;
}