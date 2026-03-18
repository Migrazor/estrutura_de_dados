/*
    1- Elabore um programa em C++ que solicite o peso e a altura de uma determinada pessoa.
    Após a digitação, exibir se esta pessoa está ou não com seu peso ideal, conforme tabela
    abaixo:

    IMC < 20 - Abaixo do Peso
    20 >= IMC < 25 - Peso Ideal
    IMC >= 25 - Acima do Peso

*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

        float peso, altura, IMC;

        cout << "Digite seu peso em KG: ";
        cin >> peso;

        cout << "Digite sua altura(ex: 1.80): ";
        cin >> altura;

        IMC = (peso / (altura * altura));

        if (IMC >= 25)
        {
            cout << "\nSeu IMC é " << IMC << ", você está ACIMA DO PESO.";
        }
        else if (IMC >= 20)
        {
            cout << "\nSeu IMC é " << IMC << ", você está com PESO IDEAL.";
        }
        else
        {
            cout << "\nSeu IMC é " << IMC << ", você está ABAIXO DO PESO.";
        }
}
