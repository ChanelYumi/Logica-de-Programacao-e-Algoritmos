/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu
peso ideal utilizando as seguintes fórmulas:
- Para homens:
peso ideal = (72,7 × altura) - 58
- Para mulheres:
peso ideal = (62,1 × altura) - 44,7
*/

#include <stdio.h>
#include <string.h>

int main () {
    
    char sexo[20];
    float altura, pesoIdealFem, pesoIdealMas;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite o sexo (masculino ou feminino): ");
    scanf("%s", sexo);

    if (strcmp(sexo, "feminino") == 0) {
        pesoIdealFem = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é: %.2f", pesoIdealFem);
    }
    else {
        pesoIdealMas = (72.7 * altura) - 58;
        printf("O seu peso ideal é: %.2f", pesoIdealMas);
    }

    return 0;
}