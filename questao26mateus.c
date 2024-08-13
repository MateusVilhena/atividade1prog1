#include<stdio.h>
#include<math.h>
int main(){
    float trabalho, tempo, potencia;
    printf("Digite o trabalho realizado do objeto: ");
    scanf("%f", &trabalho);
    printf("Digite o tempo gasto pelo objeto: ");
    scanf("%f", &tempo);
    potencia = trabalho/tempo;
    printf("\nO valor da potência do objeto é de: %.2f",potencia);
    return 0;
}