/*
	16. Faça um programa utilizando while leia números inteiros enquanto o usuário digitar valores positivos e ao final, mostre a soma dos números lidos.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int num;
	int soma = 0;

		do
		{
			cout << "Escreva um número inteiro: ";
			cin >> num;

			soma = (soma + num);

		}while(num > 0);

	cout << "A soma dos números digitados é: " << soma;
}
