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
