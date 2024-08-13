#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1, num2, soma;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um número: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("Soma= %d.\n", soma);
    return 0;
}