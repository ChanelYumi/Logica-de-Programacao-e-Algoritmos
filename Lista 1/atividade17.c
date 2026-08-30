/*
Um trabalhador recebeu seu salário e depositou em sua contra corrente bancária.
Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.
Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.
*/

#include <stdio.h>
int main() {

    float saldoInicial = 0;
    float cpmf = 0.38;
    float deposito, cheque1, cheque2, saldoAtual;

    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);

    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &cheque1);
    printf("Digite o valor do segundo cheque: ");
    scanf("%f", &cheque2);
    
    saldoAtual = saldoInicial + deposito - cheque1 - cheque2 - ( cheque1 * cpmf / 100) - ( cheque2 * cpmf / 100 );  
    
    printf("Seu saldo atual é de: %.2f\n", saldoAtual);
    return 0;
}
