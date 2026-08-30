/*
Faça um programa que receba o salário-base de um funcionário, calcule e
mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$ 50,00 e paga imposto de 10% sobre o salário-base.
*/

#include <stdio.h>
int main() {

    float gratificacao = 50;
    float imposto = 0.10;
    float salarioBase;
    float salarioReceber;

    
    printf("Digite o salário base: ");
    scanf("%f", &salarioBase);
    
    salarioReceber = (salarioBase + gratificacao) - (salarioBase * imposto);
    
    printf("O salário a receber é de: %.2f", salarioReceber);

    return 0;
}
