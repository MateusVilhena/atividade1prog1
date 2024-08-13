#include<stdio.h>
#include<math.h>
int main(){
    float massa, volume, densidade;
    printf("Digite o valor da massa: ");
    scanf("%f", &massa);
     printf("Digite o valor do volume: ");
    scanf("%f", &volume);
    densidade = massa/volume;
    printf("\nO valor da densidade é de: %.2f",densidade);
    return 0;
}