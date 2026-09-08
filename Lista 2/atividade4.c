/*
Faça um algoritmo que leia dois valores inteiros, A e B.
Se os valores forem iguais, some A + B.
Caso sejam diferentes, multiplique A * B.
*/

#include <stdio.h>
int main() {

    int numero1, numero2, soma, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
    soma = numero1 + numero2;
        printf("Soma é igual: %d", soma);
    }
    else {
    multiplicacao = numero1 * numero2;
        printf("Multiplicação é igual: %d", multiplicacao);
    }

    return 0;
}