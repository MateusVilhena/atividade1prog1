#include<stdio.h>
#include<stdlib.h>
int main(){
    float base,altura,area;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    area = (base * altura)/2;
    printf("A área do triângulo é = %.1f.\n",area);
    return 0;
}