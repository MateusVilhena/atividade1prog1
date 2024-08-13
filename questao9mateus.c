#include<stdio.h>
#include<stdlib.h>
int main(){
    float fahrenheit, celsius;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("\nA temperatura em graus Celsius é = %.2f",celsius);
    return 0;
}