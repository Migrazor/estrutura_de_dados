/*
	19. Faça um programa que leia notas (0 a 10) de vários alunos e encerre a leitura quando o usuário digitar um valor negativo.
	Calcule e mostre a média da turma.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float nota;
	float soma = 0;
	int somaQnt = 0;

	cout << "(Digite valor negativo para encerrar a lista)";

		do
		{
			cout << "\nDigite a nota do aluno: ";
			cin >> nota;

			if(nota >= 0)
			{
				soma = soma + nota;
				somaQnt++;
			}
		}while(nota >= 0);

	cout << "A média das notas dos " << somaQnt << " alunos é de: " << (soma / somaQnt);
}
