#include <iostream>
#include <list>
#include <iterator>
#include <string>

/*
Construa uma lista de funcionários em C++:

– O programa deve pedir quantos funcionários serão cadastrados;
– O programa deve avisar se lista vazia;
– O programa deve imprimir esta lista na ordem de cadastro;
– O programa deve imprimir a lista ordenada;
– O programa deve imprimir a lista reversa;
– O programa deve mostrar quantos funcionários estão cadastrados.
*/

using namespace std;

void imprimiLista(list<string> lista)
{
    list<string>::const_iterator valores;

    if (lista.empty())
	{
		cout << "LISTA VAZIA";
	}
	else 
    {
		valores = lista.begin(); //aponta para o 1º elemento da lista

        do
        {
            cout << *valores << endl;
			valores++;
		}
		while (valores != lista.end());
    }

}

int main()
{
    system("cls");
    list<string> lista;

    int qnt = 0;
    string nome;

    cout << "\n\tCADASTRO DE FUNCIONÁRIOS";

    cout << endl;
    cout << "Quantos funcionarios serao cadastrados? ";
    cin >> qnt;
        cin.ignore();
    cout << endl;
    
    for(int i = 0; i < qnt; i++)
    {
        cout << i + 1 << " - Funcionario: ";
        getline(cin, nome);
    
        lista.push_back(nome);
    }

    //Lista de Funcionários
    cout << "\nLista de Funcionarios Cadastrados: \n";
    imprimiLista(lista);

    //Lista Inversa
    cout << "\nLista Invertida: \n";
    lista.reverse();
    imprimiLista(lista);

    cout << "\nQuantidade de Funcionarios Cadastrados: " << lista.size();
}