#include <stdio.h>

int main() {

    float base, altura, area;

    printf("Digite a base e altura do triângulo: ");
    scanf(" %f %f", &base, &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é %.2f\n", area);

    return 0;
}