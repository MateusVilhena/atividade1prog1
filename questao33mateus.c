#include<stdio.h>
#include<math.h>

int main(){
    float valor_inicial, valor_residual, vida_util, depreciacao_anual;
    printf("Digite o valor inicial de um bem: ");
    scanf("%f", &valor_inicial);
    printf("Digite o seu valor residual: ");
    scanf("%f", &valor_residual);
    printf("Digite a sua vida útil em anos: ");
    scanf("%f", &vida_util);
    depreciacao_anual = (valor_inicial-valor_residual)/vida_util;
    printf("\nO valor da depreciação anual deste bem é igual a: %.2f",depreciacao_anual);
    return 0;
}