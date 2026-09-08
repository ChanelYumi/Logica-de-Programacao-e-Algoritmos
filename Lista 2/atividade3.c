/*
Faça um algoritmo que receba um número inteiro qualquer 
e informe se ele é par ou ímpar.
*/

#include <stdio.h>
int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número digitado é par.");
    }
    else {
        printf("O número digitado é ímpar.");
    }
    return 0;
}

