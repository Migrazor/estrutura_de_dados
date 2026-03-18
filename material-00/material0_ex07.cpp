/*
	7. Escreva um programa em C++ que escreva todos os números múltiplos de 5, no intervalo de 1 a 500.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	for(int i = 0; i < 501; i++)
	{
		if(i % 5 == 0)
		{
			cout << i << " ";
		}

}
