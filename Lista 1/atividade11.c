#include <stdio.h>
#include <math.h>
int main() {

    float numero, numeroQuadrado, numeroCubo, raizQuadrada, raaizCubica; 

    printf("Digite um número maior que 0: ");
    scanf("%f", &numero);

    if (numero > 0) {
    numeroQuadrado = numero * numero;
    numeroCubo = numero * numero * numero;
    raizQuadrada = sqrt(numero);
    raizCubica = cbrt(numero);

    printf("O número ao quadrado corresponde a: %.2f\n", numeroQuadrado);
    printf("O número ao cubo corresponde a: %.2f\n", numeroCubo); 
    printf("A raiz quadrada corresponde a: %.2f\n", raizQuadrada);
    printf("A raiz cúbica corresponde a: %.2f\n", raizCubica);
} else {
    printf("Número inválido.\n ");
}
   return 0;
}
