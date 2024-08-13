#include<stdio.h>
#include<stdlib.h>
int main(){
    float celsius,fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9) / 5 + 32;
    printf("\nA temperatura em graus Fahrenheit é = %.2f",fahrenheit);
    return 0;
}