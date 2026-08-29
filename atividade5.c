#include <stdio.h> 
int main() {

    float salárioAtual, percentual, aumento, novoSalário;

    printf("Digite o salário atual: ");
    scanf("%f", &salárioAtual);
    printf("Digite o percentual: ");
    scanf("%f", &percentual);
    
    aumento = (salárioAtual * percentual) / 100;
    novoSalário = salárioAtual + aumento;
    
    printf("O valor de aumento foi de: %.2f\n", aumento);
    printf("O novo salário é de: %.2f", novoSalário);
    
    return 0;
}

