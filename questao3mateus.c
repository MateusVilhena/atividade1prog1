#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2,num3;
    float media;
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);
    printf("Digite um número: ");
    scanf("%d", &num3);
    media = (num1 + num2 + num3)/3;
    printf("Média = %.2f.\n",media);
    return 0;
}