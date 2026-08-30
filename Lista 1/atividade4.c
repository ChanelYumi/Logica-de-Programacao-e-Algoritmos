/*
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
int main() {
    float salárioAtual, novoSalário;
    
    printf("Digite o Salário atual: ");
    scanf("%f", &salárioAtual) ;
    
    novoSalário = salárioAtual + (salárioAtual * 25) / 100;
   
    printf("Sálario atual é: %.2f", novoSalário);

    return 0;
} 
