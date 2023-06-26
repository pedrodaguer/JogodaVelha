#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include "src\jogo\escolherQuemJoga.hpp"
#include "src\jogo\jogoDaVelha.hpp"

using namespace std;

int main()
{
    char tabuleiro[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int numeroRodadas = 0;
    bool vezDeJogar = escolherQuemJoga();
    int resultado = -1;

    setlocale(LC_ALL, "Portuguese");
    menuInicial(vezDeJogar);
    system("cls");
    
    while (true)
    {
        resultado = gerirRodadas(tabuleiro, numeroRodadas, vezDeJogar);
        if (resultado == 0 || resultado == 1 || resultado == 2) break;      // 0 = empate, 1 = computador venceu, 2 = jogador venceu
        
        numeroRodadas++;
        vezDeJogar = !vezDeJogar;
    }
    
    return 0;
}