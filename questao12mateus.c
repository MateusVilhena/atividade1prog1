#include<stdio.h>
#include<math.h>
int main(){
    double cateto1 = 0, cateto2 = 0, hipotenusa;
    printf("Digite o valor do cateto: ");
    scanf("%lf", &cateto1);
    printf("Digite o valor do cateto: ");
    scanf("%lf", &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2)+ pow(cateto2, 2));
    printf("\nO valor da hipotenusa é = %.2lf",hipotenusa);
    return 0;
}