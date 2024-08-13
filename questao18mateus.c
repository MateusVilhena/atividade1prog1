#include<stdio.h>
#include<math.h>
int main(){
    float peso, altura, imc;
    printf("Digite o seu peso em quilogramas: ");
    scanf("%f", &peso);
     printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    printf("\nO valor do seu IMC é de: %.2f",imc);
    return 0;
}