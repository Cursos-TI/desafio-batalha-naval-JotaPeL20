#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {


    //Criar o tabuleiro(Matriz 10x10)
    int Tabuleiro [10][10];
    int x = 0, y;

    printf("****| INICIANDO BATALHA NAVAL... |****\n\n");
    
    //Iniciar tabuleiro com zeros
    for (x = 0; x < 10; x++)
    {   
        y = 0;
        while (y < 10)
        {
            Tabuleiro[x][y] = 0;
            y++;
        }
        
    }
    
    //Posicionar um navio na VERTICAL
    x = 4;
    while (x < 7) 
    {
        Tabuleiro[x][3] = 3; //Coluna D - Linhas 5,6,7 
        x++;
    }
    
    //Posicionar um navio na HORIZONTAL
    y = 5;
    while (y < 8)
    {
        Tabuleiro[3][y] = 3; //Linha 4 - Colunas G,H,I
        y++;    
    }

    printf("\n");

    //Mostrar tabuleiro com as coordenadas A-J e 1-10;
    printf(" ****| TABULEIRO BATALHA NAVAL |****\n\n");

    //Colunas com letras A-J
    printf("   ");
    y = 0;
    while (y <10)
    {
        printf(" %c ", 'A' + y); //A, B, C, D, ..., J
        y++;
    }

    printf("\n");

    //Linhas com números de 1-10;
    for (x = 0; x < 10; x++)
    {
        printf(" %2d ", x + 1); //Números 1 a 10
        y = 0;
        while (y < 10)
        {
            printf(" %d ", Tabuleiro[x][y]);
            y++;
        }
        printf("\n");
    }

    printf("\n****|LEGENDA|****\n");
    printf("0 = Água | 3 = Navio\n");
    printf("Coordenadas: Letra(Coluna) e Número(Linha)\n");
    printf("Exemplo:: A1, B2, C3, ...,J10.\n\n");

    printf("Navios em suas posições\n");
    printf("- Horizontal: F4, G4, H4\n");
    printf("- Vertical: D5, D6, D7\n");

    return 0;

}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
