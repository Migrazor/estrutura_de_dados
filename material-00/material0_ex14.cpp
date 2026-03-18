/*
	14. Crie um programa que mostre um menu com 3 opções.
	Use switch para executar a opção escolhida e continue exibindo o menu até o usuário escolher sair.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int escolha;

	cout << "Escolha uma das opções: \n[1] Opção 1 \n[2] Opção 2 \n[3] Opção 3 \n[0] Para Sair \nEscolha: ";
	cin >> escolha;

		if (escolha == 1)
		{
			cout << "Você escolheu a Opção 1.";
		}

		else if (escolha == 2)
		{
			cout << "Você escolheu a Opção 2.";
		}

		else if (escolha == 3)
		{
			cout << "Você escolheu a Opção 3.";
		}

		else if (escolha == 0)
		{
			cout << "Programa Fechado.";
		}

		else
		{
			cout << "Opção inválida.";
		}
}
