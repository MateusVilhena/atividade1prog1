#include<stdio.h>
#include<math.h>
int main(){
    float investimento, taxa, tempo, montante;
    printf("Digite o valor do investimento: ");
    scanf("%f", &investimento);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo do investimento em anos: ");
    scanf("%f", &tempo);
    montante = investimento * pow((1 + taxa / 100),tempo);
    printf("\nO valor do montante final é de: %.2f",montante);
    return 0;
}