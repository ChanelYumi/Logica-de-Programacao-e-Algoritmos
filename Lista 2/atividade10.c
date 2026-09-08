/*
O IMC — Índice de Massa Corporal — é um indicador utilizado para avaliar a condição de peso de uma
pessoa adulta.
A fórmula para o cálculo é:
IMC = peso / altura²
Faça um algoritmo que leia o peso e a altura de uma pessoa, calcule seu IMC e apresente sua
condição de acordo com a tabela:
IMC Condição
Menor que 18,5 Abaixo do peso
Entre 18,5 e 25 Peso normal
Entre 25 e 30 Acima do peso
Acima de 30 Obeso
*/

#include <stdio.h>
int main() {
 
    float peso, altura, imc, imcCondicao;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Você está abaixo do peso");
    } 
    else if (imc >= 18.5 && imc <25) {
        printf("Você está com o peso normal");
    }
    else if (imc >=25 && imc <30) {
        printf("Você está acima do peso");
    }
    else if (imc >=30) {
        printf("Você está obeso(a)");
    }

return 0;

}