#include <stdio.h>

int main() {

    int dinheiro, troco;
    printf("Nosso café custa R$7, só aceitamos notas de 5 e não damos troco. Insira o valor: ");
    scanf(" %i", &dinheiro);
    troco = dinheiro % 7;
    printf("Ficou retido o valor de %d pois a máquina não devolve troco, muito obrigado, espero que se alegre com o seu café.\n", troco);

    return 0;
}