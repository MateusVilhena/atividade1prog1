#include<stdio.h>
#include<math.h>

int main(){
    float nota1, peso1, nota2, peso2, nota3, peso3, media_ponderada;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite o seu peso: ");
    scanf("%f", &peso1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite o seu peso: ");
    scanf("%f", &peso2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);
    printf("Digite o seu peso: ");
    scanf("%f", &peso3);
    media_ponderada = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
    printf("\nA média ponderada das provas é igual a: %.2f",media_ponderada);
    return 0;
}