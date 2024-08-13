#include<stdio.h>
#include<math.h>

int main(){
    float valor_futuro, taxa, periodos, valor_presente;
    printf("Digite o valor futuro de um investimento: ");
    scanf("%f", &valor_futuro);
    printf("Digite a sua taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o número de períodos: ");
    scanf("%f", &periodos);
    valor_presente = valor_futuro/pow(1+taxa/100,periodos);
    printf("\nO valor presente do investimento é igual a: %.2f",valor_presente);
    return 0;
}