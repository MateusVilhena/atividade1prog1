#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    float raio, altura, volume;
    printf("Digite o valor do raio da base do cone: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura do cone: ");
    scanf("%f", &altura);
    volume = (pi*pow(raio,2)*altura)/3;
    printf("\nO valor do volume do cilindro é de: %.2f",volume);
    return 0;
}