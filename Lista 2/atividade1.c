/*
Faça um algoritmo que leia três valores inteiros A, B e C 
e informe se a soma de A + B é menor que C.
*/

#include <stdio.h>
int main() {

    int nota1, nota2, nota3, soma;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    soma = nota1 + nota2;

    if (soma < nota3) {
        printf("Soma %d é menor que %d", soma, nota3 );
    }
        return 0;
}
        