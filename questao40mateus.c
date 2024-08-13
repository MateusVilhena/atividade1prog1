#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main(){
    float altura, raio, volume;
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &raio);
    volume = pi*pow(raio,2)*altura;
    printf("\nO valor do volume do cilindro é igual a: %.3f",volume);
    return 0;
}