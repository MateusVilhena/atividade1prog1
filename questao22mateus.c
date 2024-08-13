#include<stdio.h>
#include<math.h>
int main(){
    float milha, quilometro;
    printf("Digite a distância percorrida em milhas: ");
    scanf("%f", &milha);
    quilometro = milha/0.621371;
    printf("\nA distância percorrida em quilômetros é igual a: %.2f",quilometro);
    return 0;
}