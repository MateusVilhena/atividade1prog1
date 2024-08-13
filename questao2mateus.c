#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2,produto;
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);
    produto = num1 * num2;
    printf("Produto = %d.\n",produto);
    return 0;
}