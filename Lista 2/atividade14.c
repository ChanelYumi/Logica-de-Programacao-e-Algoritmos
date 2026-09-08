/*
Desenvolva um programa em C que apresente ao usuário o cardápio de um restaurante com cinco
opções de pratos:
Código Prato Valor
1 Hambúrguer com fritas R$ 28,00
2 Filé de frango grelhado R$ 32,00
3 Lasanha à bolonhesa R$ 35,00
4 Filé de peixe com arroz R$ 42,00
5 Salada especial R$ 25,00
O programa deverá solicitar ao usuário que informe o código do prato desejado. Utilize a estrutura switch
para identificar a opção selecionada e apresentar na tela o nome do prato escolhido e seu respectivo valor.
Caso seja informado um código que não correspo
*/

#include <stdio.h>
int main() {

    int codigo;

    printf("1 - Hamburguer com fritas - R$ 28.00\n");
    printf("2 - File de frango grelhado - R$ 32.00\n");
    printf("3 - Lasanha bolonhesa - R$ 35.00\n");
    printf("4 - File de peixe com arroz - R$ 42.00\n");
    printf("5 - Salada especial - R$ 25.00\n");

    printf("Digite o código do prato desejado: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
        printf("Hamburguer com fritas - R$ 28.00\n");
        break; 

        case 2:
        printf("File de frango grelhado - R$ 32.00\n");
        break;

        case 3:
        printf("Lasanha bolonhesa - R$ 35.00\n");
        break;

        case 4:
        printf("File de peixe com arroz - R$ 42.00\n");
        break;

        case 5:
        printf("Salada especial - R$ 25.00\n");
        break;

        default:
        printf("Opção inválida");
    }

     return 0;
}