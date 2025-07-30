#include <stdio.h>

int main() {

    int minutos, segundos;
    printf("Digite quantos minutos você deseja converter para segundos: ");
    scanf(" %i", &minutos);
    segundos = minutos * 60;
    printf("Convertendo %i minutos em segundos, fica %i segundos.\n", minutos, segundos);
    
    return 0;
}