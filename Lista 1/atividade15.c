/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos.
c) O preço final do veículo.
*/

#include <stdio.h>
int main() {

    float precoFabrica, lucroDistribuidorPorcento, lucroDistribuidor, impostoFabricaPorcento, impostoFabrica, valorFinal;

    printf("Digite o valor do preço de fábrica: ");
    scanf("%f", &precoFabrica);
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &lucroDistribuidorPorcento);
    printf("Digite o percentual de impostos sobre o valor de fábrica: ");
    scanf("%f", &impostoFabricaPorcento);

    lucroDistribuidor = (precoFabrica * lucroDistribuidorPorcento) / 100;
    impostoFabrica = (precoFabrica * impostoFabricaPorcento) / 100;
    valorFinal = lucroDistribuidor + impostoFabrica + precoFabrica;

    printf("O valor correspondente ao lucro do distribuidor, é de: %.2f\n", lucroDistribuidor);
    printf("O valor corresponde aos impostos de fábrica, é de: %.2f\n", impostoFabrica);
    printf("O preço final de veículo, é de: %.2f\n", valorFinal);

    return 0;
}
