#include <iostream>
#include "verificarVitoria.hpp"

using namespace std;

bool jogadaComputador(char tabuleiro[3][3], int numeroRodadas)
{
    
}

bool jogadaJogador(char tabuleiro[3][3], int numeroRodadas)
{
    int opcao, coluna, linha;
    cin>>opcao;

    switch(opcao){
        case 1: linha=0; coluna=0; break;
        case 2: linha=0; coluna=1; break;
        case 3: linha=0; coluna=2; break;
        case 4: linha=1; coluna=0; break;
        case 5: linha=1; coluna=1; break;
        case 6: linha=1; coluna=2; break;
        case 7: linha=2; coluna=0; break;
        case 8: linha=2; coluna=1; break;
        case 9: linha=2; coluna=2; break;
        default:
            cout<<"Jogue um movimento possível"<<endl<<endl;
            jogadaJogador(tabuleiro, numeroRodadas);
    }
    if(tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O'){
        tabuleiro[linha][coluna] = 'X';
    }else if(tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O'){
        tabuleiro[linha][coluna] = 'O';
    }else {
        cout<<"Casa já ocupada! Por favor selecione outra!!\n\n";
        jogadaJogador(tabuleiro, numeroRodadas);
    }
    
    return verificarVitoria(tabuleiro, numeroRodadas);
}