#include <stdio.h>

int main() {

    double massa, altura, imc;
    
    printf("Digite seu peso e sua altura: ");
    scanf(" %lf %lf", &massa, &altura);
    imc = massa / (altura * altura);
    printf("Seu IMC é %.2lf", imc);

    return 0;
}