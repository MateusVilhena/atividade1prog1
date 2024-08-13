#include<stdio.h>
#include<math.h>
int main(){
    float hora, minuto;
    printf("Digite o valor em horas: ");
    scanf("%f", &hora);
    minuto = hora*60;
    printf("\nO valor de horas em minutos é de: %.2f",minuto);
    return 0;
}