/*
Escreva um algoritmo que leia dois valores booleanos (lógicos) e determine se ambos são
VERDADEIROS ou se ambos são FALSOS.
*/

#include <stdio.h>
#include <stdbool.h>
int main() {

    int numero1, numero2;
    bool valor1, valor2;

    //Primeiro mreceber os valores inteiros
    printf("Digite o primeiro número (1 ou 0): ");
    scanf("%d", &numero1);
    printf("Digite o segundo número (1 ou 0): ");
    scanf("%d", &numero2);
 
    //Transferir os valores inteiros para a variável boleana
    valor1 = numero1;
    valor2 = numero2;
    if (numero1 && numero2) {
    // Se o numero1 for verdadeiro E o numero2 for verdadeiro
        printf("Ambos são verdadeiros. ");
    }
    else if (!numero1 && !numero2) {
    // Senão, se numero1 for falso e numero2 for falso
        printf("Ambos são falsos. ");
     }
     else {
        printf("Um é verdadeiro e outro é falso. ");
     }
  
     return 0;
}