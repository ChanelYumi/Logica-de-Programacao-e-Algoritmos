/*
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo. 
Calcule e mostre o salário a receber seguindo as regras abaixo:
a) A hora trabalhada vale a metade do salário mínimo;
b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 3% do salário bruto.
d) O salário a receber equivale ao salário bruto menos o imposto.
*/

#include <stdio.h>
int main() {

    float numeroHora, salarioMinimo, salarioBruto, imposto, salarioReceber;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &numeroHora);
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    salarioBruto = numeroHora * (salarioMinimo / 2);
    imposto = ( salarioBruto * 3 ) / 100; 
    salarioReceber = salarioBruto - imposto;

    printf("O salário a receber é de: %.2f\n", salarioReceber);

    return 0;
}     
