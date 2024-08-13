#include<stdio.h>
#include<stdlib.h>
int main(){
    float metro, pe;
    printf("Digite a medida em metros: ");
    scanf("%f", &metro);
    pe = metro * 3.28084;
    printf("\nA medida em pés é = %.5f",pe);
    return 0;
}