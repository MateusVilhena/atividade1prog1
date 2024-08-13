#include<stdio.h>
#include<math.h>

int main(){
    float preco, desconto, preco_final;
    printf("Digite o preço de um produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto do produto: ");
    scanf("%f", &desconto);
    preco_final = preco*(1-desconto/100);
    printf("\nO preço final do produto após o desconto é igual a: %.2f",preco_final);
    return 0;
}