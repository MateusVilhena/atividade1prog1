#include<stdio.h>
#include<math.h>
int main(){
    float forca, area, pressao;
    printf("Digite a força aplicada em Newtons: ");
    scanf("%f", &forca);
     printf("Digite a área em metros quadrados: ");
    scanf("%f", &area);
    pressao = forca/area;
    printf("\nO valor da pressão exercida é de: %.2f",pressao);
    return 0;
}