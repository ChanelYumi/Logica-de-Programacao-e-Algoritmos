#include <stdio.h>
int main() {

    float n1, n2, n3, mediaPonderada;
    int p1, p2, p3;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o peso da primeira nota: ");
    scanf("%d", &p1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da segunda nota: ");
    scanf("%d", &p2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o peso da terceira nota: ");
    scanf("%d", &p3);
    
    mediaPonderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("A média ponderada é: %.2f", mediaPonderada);

    return 0;
}

    
    
    
