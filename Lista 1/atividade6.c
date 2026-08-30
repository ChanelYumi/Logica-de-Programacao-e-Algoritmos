/*
Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>
int main () {

    float salariobase, gratificacao, imposto, salarioreceber;

    printf("Informe  o salario base: ");
    scanf("%f", &salariobase);
     
    gratificacao  = salariobase * 0.05;
    imposto =  salariobase *  0.07;

    salarioreceber = salariobase + gratificacao - imposto;

    printf("Salário a receber = %.2f", salarioreceber);

    return 0;
}

