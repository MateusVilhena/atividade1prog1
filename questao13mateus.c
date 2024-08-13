#include<stdio.h>
#include<math.h>
int main(){
    float investimento, taxa, tempo, juros_simples;
    printf("Digite o valor do investimento: ");
    scanf("%f", &investimento);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo do investimento em anos: ");
    scanf("%f", &tempo);
    juros_simples = investimento * (taxa / 100) * tempo;
    printf("\nO valor de juros simples acumulados é de: %.2f",juros_simples);
    return 0;
}