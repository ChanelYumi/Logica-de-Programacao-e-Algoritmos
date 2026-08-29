#include <stdio.h>
int main() {

    float base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é de: %.2f\n", area);

    return 0;
}
