#include <stdio.h>
int main() {
    int n1, n2, n3, n4, soma;
   
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Didite o terceiro número: ");
    scanf("%d", &n3);
    printf("Digite o quarto número: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("O resultado é: %d\n", soma);

    return 0;
}


