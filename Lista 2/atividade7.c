/*
Faça um algoritmo que leia um número inteiro.
Caso seja par, some 5 ao seu valor.
Caso seja ímpar, some 8 ao seu valor.
*/

#include <stdio.h>
int main () {

    int numero, par, impar;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero %2 == 0) {
    // Usamos = para atribuir um valor a variável
    // Usamos == para comparar
       par = numero + 5;
       printf("O numero é par e a soma é: %d", par);
}
else {
       impar = numero + 8;
       printf("O numero é ímpar, e a soma é: %d", impar);
}

return 0;
}