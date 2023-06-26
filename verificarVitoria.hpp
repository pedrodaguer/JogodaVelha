#include <iostream>

using namespace std;

bool verificarVitoria(char tabuleiro[3][3], int numeroRodadas)
{
    //linhas 
    for (int i=0; i<3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro[i][2])
            return true;
    } 

    //colunas
    for (int i=0; i<3; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i] == tabuleiro[2][i])
            return true;
    }

    //diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]) return true;
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0]) return true;

    return false;
}