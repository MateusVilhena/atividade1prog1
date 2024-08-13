#include<stdio.h>
#include<stdlib.h>
int main(){
    int altura,largura,area;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite a largura: ");
    scanf("%f", &largura);
    area = altura * largura;
    printf("A área do retângulo é = %f.\n",area);
    return 0;
}