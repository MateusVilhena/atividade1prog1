#include<stdio.h>
#include<math.h>

int main(){
    float taxa_nominal, periodos, taxa_efetiva;
    printf("Digite a taxa de juros nominal: ");
    scanf("%f", &taxa_nominal);
    printf("Digite o número de períodos por ano: ");
    scanf("%f", &periodos);
    taxa_efetiva = pow(1+taxa_nominal/periodos,periodos)-1;
    printf("\nO valor da taxa de juros efetiva é igual a: %.4f",taxa_efetiva);
    return 0;
}