#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main(){
    float raio,area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("\nA área do circulo é = %.2f",area);
    return 0;
}