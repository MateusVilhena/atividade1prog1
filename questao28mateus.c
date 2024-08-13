#include<stdio.h>
#include<math.h>
#define pi 3.141592
int main(){
    float raio, volume;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    volume = (4*pi*pow(raio,3))/3;
    printf("\nO valor do volume da esfera é de: %.2f",volume);
    return 0;
}