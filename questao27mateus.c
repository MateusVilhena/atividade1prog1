#include<stdio.h>
#include<math.h>
int main(){
    float aresta, volume;
    printf("Digite o valor da aresta do cubo: ");
    scanf("%f", &aresta);
    volume = pow(aresta,3);
    printf("\nO valor do volume do cubo é de: %.2f",volume);
    return 0;
}