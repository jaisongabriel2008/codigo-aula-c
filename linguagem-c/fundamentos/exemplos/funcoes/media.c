#include <stdio.h>
#include <locale.h>

void ola () {
    printf ("Seja bem cindo!");
}
 
void calcularMedia( float n1, float n2) {
  float media = n1 + n2 /2;
 printf ("\n A media é: %.2f", media);
  
            
}

int main () {

    //setlocale(LC_ALL, "pt_BR.UTF-8")
    setlocale(LC_ALL, "Portuguesa");

    ola(); //Executando a funcao
  calcularMedia (4.5, 8.9);


  float n1 = 0;  
float n2 = 0; 

printf ("\nQual a primeira nota?");
scanf ("%f", &n1);

printf ("\nQual a segunda nota?");
scanf ("%f", &n2);

calcularMedia(n1, n2);
                                                                      

    return 0;
}