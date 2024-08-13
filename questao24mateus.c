#include<stdio.h>
#include<math.h>
int main(){
    float massa, aceleracao, forca_resultante;
    printf("Digite a massa do objeto: ");
    scanf("%f", &massa);
    printf("Digite a aceleração do objeto: ");
    scanf("%f", &aceleracao);
    forca_resultante = massa*aceleracao;
    printf("\nA força resultante do objeto é igual a: %.2f",forca_resultante);
    return 0;
}