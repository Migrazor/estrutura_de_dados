/*
	6. Escreva um programa em C++ que mostre o quadrado dos números inteiros no intervalo de 1 a 20.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	for(int i = 1; i < 21; i++)
	{
		cout << "O quadrado de " << i << " é: " << i * i << endl;
	}

}
