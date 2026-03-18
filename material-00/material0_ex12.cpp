/*
    12. Leia três números inteiros distintos e mostre qual é o maior.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numUm, numDois, numTres;
    int numMaior = 0;

    cout << "Digite o primeiro número: ";
    cin >> numUm;

    cout << "Digite o segundo número: ";
    cin >> numDois;

    cout << "Digite o terceiro número : ";
    cin >> numTres;

        if (numUm > numDois && numUm > numTres)
        {
            numMaior = numUm;
            cout << "\nO maior número dos três é: " << numMaior;
        }

        else if(numDois > numUm && numDois > numTres)
        {
            numMaior = numDois;
            cout << "\nO maior número dos três é: " << numMaior;
        }

        else if(numTres > numUm && numTres > numDois)
        {
            numMaior = numTres;
            cout << "\nO maior número dos três é: " << numMaior;
        }

        else if(numDois == numUm && numDois == numTres)
        {
            cout << "\nTodos números são iguais.";
        }
}
