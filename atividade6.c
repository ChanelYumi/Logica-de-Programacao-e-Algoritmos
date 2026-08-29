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

