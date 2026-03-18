/*
	8. Em uma eleição presidencial existem dois candidatos. Os votos são informados através de códigos.
	Os dados utilizados para a contagem dos votos têm-se a seguinte codificação: 1,2= voto para os respectivos candidatos; 3= voto nulo; 4= voto em branco;
	Elabore um programa em C++ que leia o código do candidato em um voto. Como finalizador do conjunto de votos, tem-se o valor 0. Calcule e escreva:
	(1) percentual de votos para cada candidato;
	(2) percentual de votos nulos;
	(3) percentual de votos em branco;
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int voto;
	int somaA = 0;
	int somaB = 0;
	int somaN = 0;
	int somaBrc = 0;
	int qntVoto = 0;

	cout << "Dê seu voto: \n[1] - Candidato A \n[2] - Candidato B \n[3] - Voto Nulo \n[4] - Voto em Branco \nEscolha: ";
	cin >> voto;

	do
	{
	if (voto > 0)
	{
		if(voto == 1) //votos Candidato A
		{
			somaA++;
		}
		else if(voto == 2) //votos Candidato B
		{
			somaB++;
		}
		else if(voto == 3) //votos Nulos
		{
			somaN++;
		}
		else if(voto == 4) //votos Candidato A
		{
			somaBrc++;
		}

	qntVoto++;

	}

	}while(voto > 0)

	cout << "Com " << qntVoto << " votos na eleição, temos os resultados:";
	cout << "\nCandidato A - " << somaA << " | [" << ((somaA * 100) / qntVoto) "%]";
	cout << "\nCandidato B - " << somaB << " | [" << ((somaB * 100) / qntVoto) "%]";
	cout << "\nVotos Nulos - " << somaN << " | [" << ((somaN * 100) / qntVoto) "%]";
	cout << "\nVotos em Branco - " << somaBrc << " | [" << ((somaBrc * 100) / qntVoto) "%]";

}
