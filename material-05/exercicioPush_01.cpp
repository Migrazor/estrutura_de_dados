/*
1. Escreva um programa em C++ que implemente uma pilha e permita ao usuário realizar
as seguintes operações:
• Inserir um elemento na pilha.
• Remover o elemento do topo da pilha.
• Verificar o elemento do topo da pilha sem removê-lo.
• Verificar se a pilha está vazia.
• Exibir o tamanho da pilha.
*/

#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;

int main()
{
    stack <int> pilha;

    int escolha = 0;
    float num;

    do
    {
        cout << "\nQual opçao voce escolhe: "
        "\n[1] - Inserir um elemento na pilha" << 
        "\n[2] - Remover o elemento do topo da pilha" << 
        "\n[3] - Verificar o elemento do topo da pilha sem removê-lo" << 
        "\n[4] - Verificar se a pilha esta vazia" <<
        "\n[5] - Exibir o tamanho da pilha" <<
        "\n[6] - Encerrar" <<
        "\nEscolha: ";
        cin >> escolha;
            system("cls");

        switch (escolha)
        {
            case 1: 
                cout << "\nQual numero deseja inserir? ";
                cin >> num;

                pilha.push(num);
            break;

            case 2:
                pilha.pop();

                cout << "\nUltimo elemento foi removido.";
            break;

            case 3: 
                cout << "\nElemento no topo: " << pilha.top();
            break;

            case 4:
                cout << "\nA pilha esta vazia? " << (pilha.empty() ? "Sim" : "Nao") << endl;
            break;

            case 5:
                cout << "\nTamanho da pilha: " << pilha.size();
            break;

            default:
                cout << "\nENCERRADO";
            break;
        }
    }while(escolha != 6);


}