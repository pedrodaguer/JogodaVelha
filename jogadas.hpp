#include <iostream>
#include "verificarVitoria.hpp"

using namespace std;

#include <iostream>
#include <string>

using namespace std;


struct Node {
  string tabuleiro;
  Node <Node*> filhos;

  Node(string tabuleiro) {
    this->tabuleiro = tabuleiro;
  }

  int jogada() {
    if (filhos.empty()) {
      return -1;
    }

    int melhor_folha = -1;
    int melhor_valor = -1;
    for (int i = 0; i < filhos.size(); i++) {
      int valor = filhos[i]->valor();
      if (valor > melhor_valor) {
        melhor_folha = i;
        melhor_valor = valor;
      }
    }

    return filhos[melhor_folha]->jogada();
  }
};

int jogadaComputador(string tabuleiro) {
  Node* raiz = new Node(tabuleiro);
  for (int i = 1; i <= 9; i++) {
    if (jogadaValida(tabuleiro, i)) {
      Node* filho = new Node(tabuleiro + " " + to_string(i));
      raiz->filhos.push_back(filho);
    }
  }

  return raiz->jogada();
}

bool jogadaValida(string tabuleiro, int jogada) {
  if (tabuleiro[jogada - 1] != ' ') {
    return false;
  }

  for (int i = 0; i < 3; i++) {
    if (tabuleiro[3 * i] == tabuleiro[3 * i + 1] ==
        tabuleiro[3 * i + 2] == jogada) {
      return false;
    }

    if (tabuleiro[i] == tabuleiro[i + 3] == tabuleiro[i + 6] == jogada) {
      return false;
    }
  }

  if (tabuleiro[0] == tabuleiro[4] == tabuleiro[8] == jogada) {
    return false;
  }

  if (tabuleiro[2] == tabuleiro[4] == tabuleiro[6] == jogada) {
    return false;
  }

  return true;
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