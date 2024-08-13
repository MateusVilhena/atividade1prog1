#include<stdio.h>
#include<math.h>

int main(){
    float valor_presente, taxa, periodos, valor_futuro;
    printf("Digite o valor presente de um investimento: ");
    scanf("%f", &valor_presente);
    printf("Digite a sua taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o número de períodos: ");
    scanf("%f", &periodos);
    valor_futuro = valor_presente*pow(1+taxa/100,periodos);
    printf("\nO valor futuro do investimento é igual a: %.2f",valor_futuro);
    return 0;
}