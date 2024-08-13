#include<stdio.h>
#include<math.h>
int main(){
    float minuto, segundo;
    printf("Digite o valor em minutos: ");
    scanf("%f", &minuto);
    segundo = minuto*60;
    printf("\nO valor de minutos em segundos é de: %.2f",segundo);
    return 0;
}