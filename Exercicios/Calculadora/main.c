#include <stdio.h>

int main() {

    float n1, n2;
    float multiplicacao, divisao, adicao, subtracao;
    printf("Digite dois números: ");
    scanf(" %f %f", &n1, &n2);
    multiplicacao = n1 * n2;
    divisao = n1 / n2;
    adicao = n1 + n2;
    subtracao = n1 - n2;
    printf("A multiplicação resulta em %f, a divisão em %f, a adição em %f e a subtração em %f", multiplicacao, divisao, adicao, subtracao);

    return 0;
}