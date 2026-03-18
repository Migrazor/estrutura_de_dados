/*
	13. Leia uma nota de 0 a 10 e informe:
		Aprovado (nota ≥ 6);
		Recuperação (nota entre 4 e 5.9)
		Reprovado (nota < 4).
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float nota;

	cout << "Insira a nota do aluno (0 a 10): ";
	cin >> nota;

		if (nota >= 6.0)
		{
			cout << "\nAluno está APROVADO!";
		}

		else if (nota > 3.9)
		{
			cout << "\nAluno está em RECUPERAÇÃO.";
		}

		else
		{
			cout << "\nAluno está REPROVADO.";
		}

}
