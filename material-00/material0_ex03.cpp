/*
	3. Faça um programa em C++ que receba o número de horas trabalhadas e o valor do salário mínimo.
	Calcule e mostre o salário a receber seguindo as regras abaixo:

	a. A hora trabalhada vale a metade do salário mínimo;
	b. O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada
	c. O imposto equivale a 3% do salário bruto;
	d. O salário a receber equivale ao salário bruto menos o imposto.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int horasTrab;
	float salMin = 1621.00;
	float valorHora, salBrt, salLiq;

	cout << "Insira a quantidade de horas trabalhadas: ";
	cin >> horasTrab;

	//A. Valor da hora trabalhada:
	valorHora = (salMin / 2);

	//B. Valor salário bruto:
	salBrt = (horasTrab * valorHora);

	//C. Imposto = 3%
	//D. Valor salário Líquido = Salário Bruto - (imposto):
	salLiq = (salBrt - (salBrt * 3) / 100);

	cout << "Com o valor da hora sendo R$" << valorHora << ", trabalhando " << horasTrab <<"hrs você receberá: \nSalário Bruto: R$" << salBrt << "\nSalário Líquido: R$" << salLiq;
}
