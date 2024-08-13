#include<stdio.h>
#include<math.h>

int main(){
    float populacao_inicial, populacao_final, anos, taxa_de_crescimento;
    printf("Digite o valor da população inicial do país: ");
    scanf("%f", &populacao_inicial);
    printf("Digite o valor da população final do país: ");
    scanf("%f", &populacao_final);
    printf("Digite o número de anos para o crescimento da população: ");
    scanf("%f", &anos);
    taxa_de_crescimento = (((populacao_final-populacao_inicial)/populacao_inicial)*100)/anos;
    printf("\nA taxa de crescimento da população do país é igual a: %.2f",taxa_de_crescimento);
    return 0;
}