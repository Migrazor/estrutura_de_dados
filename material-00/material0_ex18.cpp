/*
	18. Leia um número inteiro e mostre sua tabuada de 1 a 10.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int num;

	cout << "Escolha um número para ver sua tabuada: ";
	cin >> num;

		for(int i = 1; i <= 10; i++)
		{
			cout << num << " x " << i << " = " << (num * i) << "\n";
		}
}
