#include <stdio.h>

int main() {
    float a, b, c, temp;
    float f1, f2, f3, f4;

    printf("Digite os valores das variáveis a, b e c a serem aplicadas na fórmula: ");
    scanf(" %f %f %f", &a, &b, &c);

    f1 = (a * b) / c;
    f2 = (a * a) + b + (5 * c);
    f3 = a * b * c + b + (c / 3 * 5) - 1;
    temp = (a * b * c);
    f4 = (temp *  temp * temp) / 2;
    printf(" %f\n %f\n %f\n %f\n", f1, f2, f3, f4);

    return 0;

}