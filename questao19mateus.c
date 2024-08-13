#include<stdio.h>
#include<math.h>
int main(){
    float distancia, tempo, velocidade_media;
    printf("Digite a distância percorrida pelo caminho: ");
    scanf("%f", &distancia);
     printf("Digite o tempo gasto pelo caminho: ");
    scanf("%f", &tempo);
    velocidade_media = distancia/tempo;
    printf("\nO valor da velocidade média é de: %.2f",velocidade_media);
    return 0;
}