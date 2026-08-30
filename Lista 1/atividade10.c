/*
Faça um programa que calcule e mostre a área de um círculo.                                    
*/

#include <stdio.h>
int main() {

    float pi = 3.14;
    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área do círculo é de: %.2f\n", area);

    return 0;
}

