/*
13. Sabe-se que:
1 pé = 12 polegadas 
1 jarda = 3 pés
1 milha = 1760 jardas
Faça um programa que que receba uma medida em pés, faça a conversões a seguir e mostre os resultados.
a) Polegadas;
b) Jardas;
c) Milhas.
*/

#include <stdio.h>
int main() {

float pe, polegadas, jarda, milha;

printf("Digite o valor em pés: ");
scanf("%f", &pe);

polegadas = pe * 12;
jarda = pe / 3;
milha = (pe / 3) / 1760;

printf("O valor em polegadas é: %.2f\n", polegadas);
printf("O valor em jardas é: %.2f\n", jarda);       
printf("O valor em milhas é: %.2f\n", milha);       

return 0;
}
