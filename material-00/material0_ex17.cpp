/*
	17. Leia um número inteiro entre 1 e 10. Repita a leitura enquanto o valor estiver fora do intervalo.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int num;

		do
		{
			cout << "Entre com um número inteiro: ";
			cin >> num;

		}while(num > 10 || num <= 0);
}
