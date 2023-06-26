#include <iostream>
#include "menus.hpp"
#include "jogadas.hpp"

using namespace std;

int gerirRodadas(char tabuleiro[3][3], int numeroRodadas, bool vezDeJogar)
{
    mostrarTabuleiro(tabuleiro, numeroRodadas);

    system("pause");
    
    if (numeroRodadas == 9) return 0;  //Empate

    //Computador joga
    if (!vezDeJogar) return jogadaComputador(tabuleiro, numeroRodadas) ? 1 : 3 ; //Computador venceu : Continua o jogo

    //Jogador joga
    jogadaJogadorMenu();
    return jogadaJogador(tabuleiro, numeroRodadas) ? 2 : 3; //Jogador venceu : Continua o jogo
}