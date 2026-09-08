/*(
Elabore um algoritmo que calcule o valor a ser pago por um produto, 
considerando o preço normal da etiqueta e a condição de pagamento escolhida.
Utilize os códigos abaixo:
Código Condição de pagamento
1 À vista em dinheiro ou cheque: 10% de desconto
2 À vista no cartão de crédito: 15% de desconto
3 Em duas parcelas: preço normal, sem juros
4 Em duas parcelas: acréscimo de 10% sobre o preço normal
O algoritmo deve ler:
• o preço do produto;
• o código da condição de pagamento;
e apresentar o valor final a ser pago.
)*/

#include <stdio.h>
int main() {

    int codigo;
    float preco, valorFinal;

    printf("Informe o código do produto: ");
    scanf("%d", &codigo);
    printf("Informe o valor da etiqueta: ");
    scanf("%f", &preco);

    if (codigo == 1) {
        valorFinal = preco - (preco * 10 / 100);
        printf("Valor final com desconto de 10%%, é de: %.2f", valorFinal);
    }
    else if (codigo == 2) {
        valorFinal = preco - (preco * 15 / 100);
        printf("Valor final com desconto de 15%%, é de: %.2f", valorFinal);
    }
    else if (codigo == 3) { 
        printf("Valor final (sem desconto), é de: %.2f", preco);
    }
    else if (codigo == 4) {
        valorFinal = preco + (preco * 10 / 100);
        printf("Valor final com acréscimo de 10%%, é de: %.2f", valorFinal);

    }

return 0;
}
