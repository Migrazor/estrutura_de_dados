/*
Exercício 2 — Classificação Completa de Triângulos

Um triângulo é válido se:
    • A < B + C
    • B < A + C
    • C < A + B

Quanto aos lados:
    • Equilátero → todos iguais
    • Isósceles → dois iguais
    • Escaleno → todos diferentes

Considere o maior lado como L.
    • Se L² = A² + B² → Triângulo Retângulo
    • Se L² > A² + B² → Triângulo Obtusângulo
    • Se L² < A² + B² → Triângulo Acutângulo

Exibir:
    • Se é triângulo
    • Tipo quanto aos lados
    • Tipo quanto aos ângulos
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct infoTriangulo
{
    int ladoA;
    int ladoB;
    int ladoC;
    string classificacao;
    string tipo;
};

int main()
{
    infoTriangulo info;
    char valido;

    int vetLados[3];
    do
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "De o valor dos lados do triangulo: ";
            cin >> vetLados[i];

        info.ladoA = vetLados[0];
        info.ladoB = vetLados[1];
        info.ladoC = vetLados[2];
        }

//Validar Triangulo
        if(info.ladoA < info.ladoB + info.ladoC && info.ladoB < info.ladoA + info.ladoC && info.ladoC < info.ladoB + info.ladoA)
        {
            valido = 'S';
            cout << "\nO triangulo e valido.";
        }
        else
        {
            valido = 'N';
            cout << "\nTriangulo invalido.";
            cout << endl;
        }

    }while(valido != 'S');

//Tipo do Triangulo
    if (info.ladoA == info.ladoB && info.ladoB == info.ladoC)
    {
        info.tipo = "Triangulo Equilatero";
    }
    else if (info.ladoA == info.ladoB || info.ladoA == info.ladoC || info.ladoB == info.ladoC)
    {
        info.tipo = "Triangulo Isoceles";
    }
    else
    {
        info.tipo = "Triangulo Escaleno";
    }

//Maior lado e Classificacao
    int aux;
        for(int i = 0; i < 3; i++)
        {
            int menorLado = i;

            for(int j = i + 1; j < 3; j++)
            {
                if(vetLados[j] < vetLados[menorLado])
                {
				    menorLado = j;
                }

                if (menorLado != i)
                {
                    aux = vetLados[i];
                    vetLados[i] = vetLados[menorLado];
                    vetLados[menorLado] = aux;
                }
            }
        }


        for(int i = 0; i < 3; i++)
        {
            int maiorLado = vetLados[2];

            if(pow(maiorLado, 2) == (pow(vetLados[0], 2) + pow(vetLados[1], 2)))
            {
                info.classificacao = "Triangulo Retangulo";
            }
            else if(pow(maiorLado, 2) > (pow(vetLados[0], 2) + pow(vetLados[1], 2)))
            {
                info.classificacao = "Triangulo Obtusangulo";
            }
            else if(pow(maiorLado, 2) < (pow(vetLados[0], 2) + pow(vetLados[1], 2)))
            {
                info.classificacao = "Triangulo Acutangulo";
            }
        }

        cout << "\nInformacoes do Triangulo: ";
        cout << "\nLados do Triangulo: [" << info.ladoA << "]" << "[" << info.ladoB << "]" << "[" << info.ladoC << "]";
        cout << "\nTipo do Triangulo: " << info.tipo;
        cout << "\nClassificacao do Triangulo: " << info.classificacao;
}