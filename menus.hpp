#include <iostream>
#include <stdlib.h>

using namespace std;

void menuInicial(bool quemJoga)
{
    cout << "Bem-vindo ao jogo da velha!" << endl;
    cout << "O jogador " << (quemJoga ? "X" : "O") << " começa!" << endl;
    cout << "O computador é o 'O' e você é o 'X'." << endl << endl;
    system("pause");
}

void mostrarTabuleiro (char tabuleiro[3][3], int numeroRodadas)
{
    cout<<numeroRodadas+1<<"° Rodada: \n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<tabuleiro[0][0]<<"  |  "<<tabuleiro[0][1]<<"  |  "<<tabuleiro[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<tabuleiro[1][0]<<"  |  "<<tabuleiro[1][1]<<"  |  "<<tabuleiro[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<tabuleiro[2][0]<<"  |  "<<tabuleiro[2][1]<<"  |  "<<tabuleiro[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
    cout << endl << endl;
}

void jogadaJogadorMenu ()
{
    cout<<"Sua vez de jogar! Escolha uma posição válida: ";
}