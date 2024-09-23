#include <stdio.h>

#define BISPO 5
#define TORRE 5
#define RAINHA 8
#define CAVALOX 1
#define CAVALOY 3

void Bispo (int casa) {
        int mov =  1;
        while (mov <= casa){
            printf("Bispo movimenta %d na diagonal superior direita (Cima, Direita)\n", mov);
            mov++;
        }
}
void Torre (int casa) {
        int mov =  1;
        while (mov <= casa){
            printf("Torre movimenta %d para direita\n", mov);
            mov++;
        }
}
void Rainha (int casa) {
        int mov =  1;
        while (mov <= casa){
            printf("Rainha movimenta %d para esquerda\n", mov);
            mov++;
        }
}
void Cavalo (int casay, int casax) {
        int movy =  1;
        int movx =  1;
        while (movx <= casax){
            while (movy <= casay){
                printf("Cavalo movimenta %d para cima\n", movy);
                movy++;
            }
            printf("Cavalo movimenta %d para direita\n", movx);
            movx++;
        }
}
int main() {

    printf("DESAFIO DO XADREZ\n");

    printf("Movimentação do Bispo:\n");
    Bispo(BISPO);
    printf("\n");

    printf("Movimentação da Torre\n");
    Torre(TORRE);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    Rainha(RAINHA);
    printf("\n");

    printf("Movimentação do Cavalo:\n");
    Cavalo(CAVALOY,CAVALOX);
    printf("\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
