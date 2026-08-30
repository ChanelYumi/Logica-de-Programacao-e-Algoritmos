/*
Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
*/

#include <stdio.h>
#include <math.h>
int main() {

    float n1, n2, n1Elevadon2, n2Elevadon1;
   
    printf("Digite um número maior que 0: ");
    scanf("%f", &n1);

    if (n1 > 0) {
        printf("Digite outro número maior que 0: ");
        scanf("%f", &n2);

        if (n2 > 0) {

            n1Elevadon2 = pow(n1, n2);
            n2Elevadon1 = pow(n2, n1);

            printf("n1 elevado a n2, é: %.2f\n", n1Elevadon2 );
            printf("n2 elevado a n1, é: %.2f\n", n2Elevadon1 );

        }   else {
            printf("Tente novamente!\n ");
        }
    } else {
        printf("Tente novamente!\n ");
    }
    return 0;
}
