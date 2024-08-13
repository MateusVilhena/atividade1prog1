#include<stdio.h>
#include<math.h>
int main(){
    float quilometro, milha;
    printf("Digite a distância percorrida em quilômetros: ");
    scanf("%f", &quilometro);
    milha = quilometro*0.621371;
    printf("\nA distância percorrida em milhas é igual a: %.2f",milha);
    return 0;
}