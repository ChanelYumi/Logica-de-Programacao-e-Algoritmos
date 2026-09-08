/*
Escreva um algoritmo que leia:
• o número de identificação do aluno;
• três notas obtidas nas avaliações;
• a média dos exercícios.
Calcule a média de aproveitamento utilizando a fórmula:
MA = (nota1 + nota2 × 2 + nota3 × 3 + ME) / 7
Em seguida, atribua o conceito conforme a tabela:

Média de Aproveitamento Conceito
MA ≥ 90 A
75 ≤ MA < 90 B
60 ≤ MA < 75 C
40 ≤ MA < 60 D
MA < 40 E

O algoritmo deverá apresentar:
• número de identificação do aluno;
• nota 1;
• nota 2;
• nota 3;
• média dos exercícios;
• média de aproveitamento;
• conceito obtido;
• situação final.

A situação deverá ser:
• Aprovado, para conceitos A, B ou C;
• Reprovado, para conceitos D ou E.
*/

#include <stdio.h>
int main() {

    int numeroid;
    float nota1, nota2, nota3, mediaExercicio, MA;

    printf("Digite o número de identificação do aluno: ");
    scanf("%d", &numeroid);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a média dos exercícios (ME): ");
    scanf("%f", &mediaExercicio);

    MA = (nota1 + nota2 * 2 + nota3 * 3 + mediaExercicio) / 7;

    if (MA >= 90) {
        printf("Conceito: A");
    } 
    else if (MA >= 75 && MA < 90) {
        printf("Conceito: B");
    }
    else if (MA >= 60 && MA < 75) {
        printf("Conceito: C");
    }
    else if (MA >= 40 && MA < 60) {
        printf("Conceito: D");
    }
    else if (MA < 40) {
        printf("Conceito: E");
    }
    
    if (MA >= 60) {
        printf("Situação final: APROVADO" );
    }
    else {
        printf("Situação final: REPROVADO");
    }

    return 0;

}