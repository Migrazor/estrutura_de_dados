/*
    11. Faça um programa que leia um número inteiro e informe se ele é par ou ímpar.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite um número: ";
    cin >> num;

        if (num % 2 == 0)
        {
            cout << "\nO número é par.";
        }

        else
        {
            cout << "\nO número é ímpar.";
        }
}
