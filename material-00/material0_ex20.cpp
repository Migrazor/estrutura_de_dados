/*
	20. Faça um programa que leia um número inteiro positivo e mostre a contagem regressiva até zero.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int num;

	cout << "Digite um número inteiro: ";
	cin >> num;

		for (int i = num; i >= 0; i--)
		{
			cout << i << " ";
		}

}
