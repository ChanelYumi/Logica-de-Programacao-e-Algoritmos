/*
Faça um algoritmo que leia um número.
• Caso ele seja positivo, calcule o seu dobro
• Caso ele seja negativo, calcule o seu triplo
Ao final, apresente o resultado.
*/

#include <stdio.h>
int main() {

int numero, dobro, triplo;

printf("Digite um número: ");
scanf("%d", &numero);

if (numero > 0) {
    dobro = numero * 2;
    printf("O dobro de %d é: %d", numero, dobro);
}
else {
    triplo = numero * 3;
    printf("O triplo de %d é: %d", numero, triplo);
    
// Primeiro %d é o valor digitado pelo usuario (variavel numero)
// Segundo %d é o resultado do calculo 
}

return 0;
}