/*
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
*/

#include <stdio.h>
int main() {

    float deposito, taxaJuros, rendimento, valorFinal;

    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxaJuros);

    rendimento = deposito * (taxaJuros / 100);
    valorFinal = deposito + rendimento;

    printf("O rendimento é: %.2f\n", rendimento);
    printf("O valor final após o rendimento é: %.2f\n", valorFinal);    

    return 0;
}       
