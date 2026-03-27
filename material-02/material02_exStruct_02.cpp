/*
    2- Desenvolver um programa que registre detalhes de livros em uma biblioteca,
     como título, autor e ano de publicação. 
     O programa deve continuar solicitando informações até que um título de livro específico seja inserido.
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

    struct infoLivro
    {
        string titulo;
        string autor;
        int ano;
    };
    

int main()
{
    setlocale(LC_ALL, "Portuguese");

    infoLivro livro;
    int qnt = 0;
    string livroEspec = "B";

        do
        {   
            qnt++;

            cout << "Digite o título do livro: ";
            getline(cin, livro.titulo);

            cout << "Digite o nome do seu autor: ";
            getline(cin, livro.autor);

            cout << "Qual seu ano de lançamento: ";
            cin >> livro.ano;

            cout << "\n---LIVROS---";
                cout << "\nTítulo: " << livro.titulo << endl;
                cout << "Autor: " << livro.autor << endl;
                cout << "Data de Lançamento: " << livro.ano << endl;
             cout << "-=-=-=-=-=-=-=-=-=-=-=-" << endl;

             if(livro.titulo == livroEspec)
                {
                    break;
                }

                cin.ignore(); //limpa buffer
        }while(true);

        return 0;
}
