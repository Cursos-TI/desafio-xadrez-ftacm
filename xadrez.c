#include <stdio.h>
//definir as constantes com o número de movimentos a ser realizado por cada peça
#define BISPO 5
#define TORRE 5
#define RAINHA 8
#define CAVALOX 1
#define CAVALOY 3
//criar a função do movimento do bispo
//recebe o valor de quantas casas vai se mover
//inicia se movimentando uma vez, e incrementa o movimento até que se mova o valor total que recebeu na função
void Bispo (int casa) {
        int mov =  1;
        while (mov <= casa){
            printf("Bispo movimenta %d na diagonal superior direita (Cima, Direita)\n", mov);
            mov++;
        }
}
//criar a função do movimento da torre
//recebe o valor de quantas casas vai se mover
//inicia se movimentando uma vez, e incrementa o movimento até que se mova o valor total que recebeu na função
void Torre (int casa) {
        int mov =  1;
        while (mov <= casa){
            printf("Torre movimenta %d para direita\n", mov);
            mov++;
        }
}
//criar a função do movimento da rainha
//recebe o valor de quantas casas vai se mover
//inicia se movimentando uma vez, e incrementa o movimento até que se mova o valor total que recebeu na função
void Rainha (int casa) {
        int mov =  1;
        while (mov <= casa){
            printf("Rainha movimenta %d para esquerda\n", mov);
            mov++;
        }
}
//criar a função do movimento do cavalo
//recebe o valor de quantas casas vai se mover no eixo y e no eixo x
//inicia se movimentando uma vez para cada eixo
//Com uma função while aninhada, realiza primeiro os 3 movimentos em y para então o while virar false e subir para o while do eixo x
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
// função principal
// Contem printf explicativos do que ocorre no inicio e quem irá se movimentar
int main() {

    printf("DESAFIO DO XADREZ\n");

    printf("Movimentação do Bispo:\n");
    //chama a função do movimento do bispo com a constante definida de seu movimento
    Bispo(BISPO);
    printf("\n");

    printf("Movimentação da Torre\n");
    //chama a função do movimento da torre com a constante definida de seu movimento
    Torre(TORRE);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    //chama a função do movimento da rainha com a constante definida de seu movimento
    Rainha(RAINHA);
    printf("\n");

    printf("Movimentação do Cavalo:\n");
    //chama a função do movimento do cavalo com as constantes definidas de seu movimento
    Cavalo(CAVALOY,CAVALOX);
    printf("\n");

    return 0;
}
