/*
    3 - Construir um programa para avaliar filmes, pedindo ao usuário para avaliar diferentes aspectos como enredo, atuação e
    efeitos especiais. Calcule a média das notas avaliadas em enredo, atuação e efeitos especiais. 
    O programa deve permitir a avaliação de vários filmes. O programa deve parar quando usuário não desejar mais continuar.
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

    struct avaliacaoFilme
    {
        int enredo;
        int atuacao;
        int efeitos;
    };
    

int main()
{
    setlocale(LC_ALL, "Portuguese");

    avaliacaoFilme notas;
    char continua = 's';
    int notasEnredo = 0;
    int notasAtuacao = 0;
    int notasEfeitos = 0;
    int i = 0;

    cout << "-=-=-=-=-=-AVALIAÇÃO DE FILMES-=-=-=-=-=-" << endl;

    do
    {
            cout << "\nFilme " << i + 1 << ": " << endl;
            cout << "Nota de Enredo (1 a 5): ";
            cin >> notas.enredo;
                notasEnredo = notasEnredo + notas.enredo;

            cout << "Nota de Atuacao (1 a 5): ";
            cin >> notas.atuacao;
                notasAtuacao = notasAtuacao + notas.atuacao;

            cout << "Nota de Efeitos Especiais (1 a 5): ";
            cin >> notas.efeitos;
                notasEfeitos = notasEfeitos + notas.efeitos;

    cin.ignore(); //limpa buffer

        cout << "\nFILME " << i + 1 << endl;
        cout << "\nEnredo: " << notas.enredo;
        cout << "\nAtuacao: " << notas.atuacao;
        cout << "\nEfeitos: " << notas.efeitos << endl;

        i++;

        cout << "Deseja continuar? (s/n): " << endl;
        cin >> continua;

    } while (continua == 's' || continua == 'S');

    cout << "-=-=-=-=-=-MÉDIA NOTAS-=-=-=-=-=-";
    cout << "\nMedia das Notas Enredo: " << (notasEnredo / i);
    cout << "\nMedia das Notas de Atuacao: " << (notasAtuacao / i);
    cout << "\nMedia das Notas de Efeitos Especiais: " << (notasEfeitos / i);

    
}