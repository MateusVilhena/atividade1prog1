#include<stdio.h>
#include<math.h>
int main(){
    float forca_aplicada, distancia, trabalho;
    printf("Digite a força aplicada sobre o objeto: ");
    scanf("%f", &forca_aplicada);
    printf("Digite a distância percorrida do objeto: ");
    scanf("%f", &distancia);
    trabalho = forca_aplicada*distancia;
    printf("\nO valor do trabalho do objeto é igual a: %.2f",trabalho);
    return 0;
}