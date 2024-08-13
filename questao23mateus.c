#include<stdio.h>
#include<math.h>
int main(){
    float massa, velocidade, energia_cinetica;
    printf("Digite a massa do objeto: ");
    scanf("%f", &massa);
    printf("Digite a velocidade do objeto: ");
    scanf("%f", &velocidade);
    energia_cinetica = massa*pow(velocidade,2)/2;
    printf("\nA energia cinética do objeto é igual a: %.2f",energia_cinetica);
    return 0;
}