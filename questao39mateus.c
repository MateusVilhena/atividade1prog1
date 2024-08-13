#include<stdio.h>
#include<math.h>

int main(){
    int numero_lados, medida_lado, perimetro;
    printf("Digite o número de lados de um polígono regular: ");
    scanf("%d", &numero_lados);
    printf("Digite a medida do lado do polígono: ");
    scanf("%d", &medida_lado);
    perimetro = numero_lados*medida_lado;
    printf("\nO perímetro do polígono é igual a: %d",perimetro);
    return 0;
}