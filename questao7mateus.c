#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main(){
    float raio,perimetro;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    perimetro = 2 * pi * raio;
    printf("\nO perímetro do circulo é = %.2f",perimetro);
    return 0;
}