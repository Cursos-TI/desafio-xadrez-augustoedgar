#include <stdio.h>

int main() {
    int i;
    int casas, opcaoPeca, direcao;

    printf("=== Desafio Xadrez - Nivel Novato ===\n\n");

    // Escolher a peça
    printf("Escolha a peca para mover:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("Opcao: ");
    scanf("%d", &opcaoPeca);

    printf("\nQuantas casas deseja mover? ");
    scanf("%d", &casas);

    printf("\nEscolha a direcao do movimento:\n");
    printf("1 - Cima\n");
    printf("2 - Baixo\n");
    printf("3 - Esquerda\n");
    printf("4 - Direita\n");
    printf("5 - Diagonal superior direita\n");
    printf("6 - Diagonal superior esquerda\n");
    printf("7 - Diagonal inferior direita\n");
    printf("8 - Diagonal inferior esquerda\n");
    printf("Opcao: ");
    scanf("%d", &direcao);

    printf("\n=== Movimento da peca ===\n");

    if (opcaoPeca == 1) {
        printf("Bispo se movendo %d casas:\n", casas);
        for (i = 1; i <= casas; i++) {
            if (direcao == 5)
                printf("Diagonal superior direita - Passo %d\n", i);
            else if (direcao == 6)
                printf("Diagonal superior esquerda - Passo %d\n", i);
            else if (direcao == 7)
                printf("Diagonal inferior direita - Passo %d\n", i);
            else if (direcao == 8)
                printf("Diagonal inferior esquerda - Passo %d\n", i);
            else
                printf("O bispo so pode se mover na diagonal!\n");
        }
    }

    else if (opcaoPeca == 2) {
        printf("Torre se movendo %d casas:\n", casas);
        i = 1;
        while (i <= casas) {
            if (direcao == 1)
                printf("Cima - Passo %d\n", i);
            else if (direcao == 2)
                printf("Baixo - Passo %d\n", i);
            else if (direcao == 3)
                printf("Esquerda - Passo %d\n", i);
            else if (direcao == 4)
                printf("Direita - Passo %d\n", i);
            else
                printf("A torre nao se move na diagonal!\n");
            i++;
        }
    }

    else if (opcaoPeca == 3) {
        printf("Rainha se movendo %d casas:\n", casas);
        i = 1;
        do {
            if (direcao == 1)
                printf("Cima - Passo %d\n", i);
            else if (direcao == 2)
                printf("Baixo - Passo %d\n", i);
            else if (direcao == 3)
                printf("Esquerda - Passo %d\n", i);
            else if (direcao == 4)
                printf("Direita - Passo %d\n", i);
            else if (direcao == 5)
                printf("Diagonal superior direita - Passo %d\n", i);
            else if (direcao == 6)
                printf("Diagonal superior esquerda - Passo %d\n", i);
            else if (direcao == 7)
                printf("Diagonal inferior direita - Passo %d\n", i);
            else if (direcao == 8)
                printf("Diagonal inferior esquerda - Passo %d\n", i);
            else
                printf("Direcao invalida!\n");
            i++;
        } while (i <= casas);
    }

    else {
        printf("Opcao de peca invalida!\n");
    }

    printf("\n=== Fim do movimento ===\n");

    return 0;
}
