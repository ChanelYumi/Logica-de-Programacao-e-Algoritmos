#include <stdio.h>
int main () {

    float salarioAtual, percentual, aumento, novoSalario;

    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = (salarioAtual * percentual) / 100; 
    novoSalario = salarioAtual + aumento;

    printf("O aumento foi de: %.2f\n", aumento);
    printf("Novo salário: %.2f", novoSalario);

    return 0;
}
