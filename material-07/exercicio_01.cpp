#include <iostream>
#include <list>
#include <iterator>

/*
Você foi contratado para criar um programa em C++ que permite ao usuário digitar uma
lista de números inteiros e, em seguida, exibir os números na ordem de inserção e em
ordem inversa.

• Utilize a classe list para armazenar uma lista de números inteiros.
• Solicite ao usuário que digite 5 números inteiros.
• Insira os números na lista, um por vez.
• Após a inserção dos números, exiba os números da lista na ordem em que foram inseridos,
separados por espaços.
• Em seguida, exiba os números da lista em ordem inversa, separados por espaços.
• Compile e execute o programa para testá-lo.
• Verifique se a saída do programa está correta e se os números são exibidos corretamente
na ordem de inserção e em ordem inversa.
*/

using namespace std;

void imprimiLista(list<int> lista)
{
    list<int>::const_iterator valores;

    if (lista.empty())
	{
		cout << "IMPOSSIVEL IMPRESSAO - LISTA VAZIA";
	}
	else 
    {
		valores = lista.begin(); //aponta para o 1º elemento da lista

        do
        {
            cout << *valores << " ";
			valores++;
		}
		while (valores != lista.end());
	}

}

int main()
{
    system("cls");

    list<int> lista;

    int num;
    int qnt = 0;

    while(qnt != 5)
    {
        cout << "Informe os valores: ";
        cin >> num;

        lista.push_back(num);

        qnt++;
    }

    //Lista
    cout << "\nLista de numeros informada: ";
    imprimiLista(lista);

    //Lista Inversa
    cout << "\nLista de numeros informada: ";
    lista.reverse();
    imprimiLista(lista);
}