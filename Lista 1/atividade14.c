/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre:
a) A idade dessa pessoa.
b) Quantos anos essa pessoa terá em 2050.
*/

#include <stdio.h>
int main() {

    int anoNascimento, anoAtual, idade, idade2050;
   
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idade2050 = 2050 - anoNascimento;
     
    printf("A sua idade atual é: %d\n", idade);
    printf("A sua idade em 2050, será de: %d\n", idade2050);

    return 0; 
}

