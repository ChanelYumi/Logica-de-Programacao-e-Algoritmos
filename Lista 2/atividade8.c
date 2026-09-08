/*
Escreva um algoritmo que leia três valores inteiros diferentes entre si e apresente-os em ordem
decrescente.
*/

#include <stdio.h>
int main () {
    
    int numero1, numero2, numero3;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d%", &numero2);
    
    while (numero2 == numero1) {
    // Enquanto numero2 for igual ao numero1...
        printf("Número já digitado. Por favor, digite outro número: ");
        scanf("%d", numero2);
    }
    printf("Digite o terceiro número: ");
    scanf("%d%", &numero3);

    while (numero3 == numero1 || numero3 == numero2) {
    // Enquanto a condição for verdadeira,
    // repita de novo tudo que está dentro das chaves do while.
    // while (enquanto)
    // == (é igual á?)
    // || (OU) Só é falso quando todas as condições forem falsas.
        printf("Número já digitado. Por favor digite outro número: ");
        scanf("%d", &numero3);
    }

    if (numero1 > numero2 && numero1 > numero3) {
        if (numero2 > numero3) {
        printf("%d %d %d\n", numero1, numero2, numero3);
        }
        else {
            printf("%d %d %d\n", numero1, numero3, numero2);
        }
    }
    else if (numero2 > numero1 && numero2 > numero3) {
        // Agora só falta ordenar numero1 e numero3
        if (numero1 > numero3) {
            printf("%d %d %d\n", numero2, numero1, numero3);
        }
        else {
            printf("%d %d %d\n", numero2, numero3, numero1);
        }
    }

    // Nem numero1 nem numero2 são os maiores.
    // Portanto, numero3 é o maior.
    else {
        // Agora só falta ordenar numero1 e numero2
        if (numero1 > numero2) {
            printf("%d %d %d\n", numero3, numero1, numero2);
        }
        else {
            printf("%d %d %d\n", numero3, numero2, numero1);
       }
    }
    return 0;
}