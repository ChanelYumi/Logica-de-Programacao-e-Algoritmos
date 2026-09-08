/*
Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. 
Caso o sexo seja F e o estado civil seja CASADA, solicite também o tempo de casamento, em anos.
*/

#include <stdio.h>
#include <string.h>

int main() {

    char nome[20], sexo[15], estadoCivil[20];
    int tempoCasamento;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite o sexo (feminino/masculino): ");
    scanf("%s", sexo);
    printf("Digite o estado civil (casada/solteira): ");
    scanf("%s", estadoCivil);


    if (strcmp(sexo, "feminino") == 0 && strcmp(estadoCivil, "casada") == 0) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempoCasamento);
    }

    return 0;
}





