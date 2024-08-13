#include<stdio.h>
#include<stdlib.h>
int main(){
    float kg, libra;
    printf("Digite o peso em quilogramas: ");
    scanf("%f", &kg);
    libra = kg * 2.20462;
    printf("\nO peso em libras é = %.5f",libra);
    return 0;
}