/*
Desenvolva um programa em C para determinar o valor de uma multa de trânsito 
a partir da velocidade registrada de um veículo. O programa deverá solicitar 
a velocidade máxima permitida na via e a velocidade registrada do veículo. 
Caso o veículo esteja dentro do limite permitido, informe que não houve infração.
Caso o limite tenha sido ultrapassado, utilize estruturas if, else if e else aninhadas 
para classificar a infração considerando o percentual excedido: até 20% acima do limite,
a infração será média; acima de 20% e até 50%, será grave; e acima de 50%, será 
gravíssima. Após determinar a classificação, verifique se a velocidade registrada foi 
superior a 120 km/h. Nesse caso, acrescente à mensagem um alerta de velocidade extremamente 
elevada. O programa deverá apresentar o limite da via, a velocidade registrada, o 
percentual excedido e a classificação final da situação.
*/

#include <stdio.h>
int main() {

    float velocidadeMaxima, velocidadeR, velocidadeEx, percentualEx;

    printf("Digite a velocidade máxima permitida na via: ");
    scanf("%f", &velocidadeMaxima);
    printf("Digite a velocidade registrada do veículo: ");
    scanf("%F", &velocidadeR);

    if (velocidadeR <= velocidadeMaxima) {
        printf("Não houve infração! ");
    }
    else {
        velocidadeEx = velocidadeR - velocidadeMaxima;
        percentualEx = (velocidadeEx / velocidadeMaxima) * 100;
        
        if (percentualEx <= 20) {
            printf("Limite da via: %.2f\n", velocidadeMaxima);
            printf("Velocidade registrada: %.2f\n", velocidadeR);
            printf("Percentual de velocidade excedido em: %.2f%%\n", percentualEx);
            printf("Classificação da infração: MÉDIA! ");
        }
        else if (percentualEx > 20 && percentualEx <= 50) {
            printf("Limite da via: %.2f\n", velocidadeMaxima);
            printf("Velocidade registrada: %.2f\n", velocidadeR);
            printf("Percentual de velocidade excedido em: %.2f%%\n", percentualEx);
            printf("Classificação da infração: GRAVE! ");
        }
        else {
            printf("Limite da via: %.2f\n", velocidadeMaxima);
            printf("Velocidade registrada: %.2f\n", velocidadeR);
            printf("Percentual de velocidade excedido em: %.2f%%\n", percentualEx);
            printf("Classificação da infração: GRAVÍSSIMA! ");
        } 
    if (velocidadeR > 120) {
        printf("ALERTA: Velocidade extremamente elevada!\n");
    }

    }
    return 0;
}