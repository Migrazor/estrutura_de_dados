/*
Elaborar um programa em C++ em que dada a idade de um nadador, classifique-o em uma das seguintes categorias:
	infantil A (de 5 a 7 anos)
	infantil B (de 8 a 10 anos)
	juvenil A (de 11 a 13 anos)
	juvenil B (14 a 17 anos) e
	senior (maior que 17 anos)
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int idade;

	cout << "Qual a idade do nadador? "
	cin >> idade;

		if(idade > 17)
		{
			cout << "O nadador é categoria: SENIOR.";

		}
		else if(idade > 13)
		{
			cout << "O nadador é categoria: JUVENIL B.";

		}
		else if(idade > 10)
		{
			cout << "O nadador é categoria: JUVENIL A.";

		}
		else if(idade > 7)
		{
			cout << "O nadador é categoria: INFANTIL B.";

		}
		else if(idade > 4
		{
			cout << "O nadador é categoria: INFANTIL A.";

		}

}
