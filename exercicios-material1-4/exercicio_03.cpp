/*
Exercício 3 — Análise Completa de Sequência Numérica

Entrada:
•Um número inteiro N (quantidade de valores, N ≥ 10)

•Em seguida, o usuário deve digitar N números inteiros

--

Regras e Processamentos:
•
Durante a leitura dos valores (usando for), o programa deve:
1. Classificações individuais:
Para cada número, classifique:

•Par ou ímpar
•Positivo, negativo ou zero
•Múltiplo de 3 e/ou de 5:
•Se for múltiplo de ambos → "Múltiplo de 3 e 5"
•Caso contrário, verificar separadamente

Ao final, o programa deve informar:
•Quantidade de números pares e ímpares
•Quantidade de positivos, negativos e zeros
•Quantidade de múltiplos de 3
•Quantidade de múltiplos de 5
•Quantidade de números que são múltiplos de ambos
•Maior número digitado
•Menor número digitado
•Média dos números pares
•Média dos números ímpares
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    float somaPar = 0, somaImpar = 0;
    float qntPar = 0, qntImpar = 0;
    float qntMultT = 0, qntMultC = 0, qntMultCT = 0;
    float qntPos = 0, qntNeg = 0, qntZero = 0;
    float menor, maior;

    cout << "Escolha o tamanho do vetor (>= 10): ";
    cin >> num;
    if(num < 10)
    {
        cout << "Valor inválido.";
    }

    int vetNum[num];

    for(int i = 0; i < num; i++)
    {
        cout << "Informe os valores: ";
        cin >> vetNum[i];
    }

    //Par ou Impar
    for(int i = 0; i < num; i++)
    {
        if(vetNum[i] % 2 == 0)
        {
            qntPar++;
            somaPar = somaPar + vetNum[i];
        }

        else if(vetNum[i] % 2 != 0)
        {
            qntImpar++;
            somaImpar = somaImpar + vetNum[i];
        }
    }

    //Multiplo de 3, 5 ou ambos
    for(int i = 0; i < num; i++)
    {
        if (vetNum[i] != 0)
        {
            if(vetNum[i] % 3 == 0)
            {
                qntMultT++;
            }

            if(vetNum[i] % 5 == 0)
            {
                qntMultC++;
            }

            if(vetNum[i] % 3 == 0 && vetNum[i] % 5 == 0)
            {
                qntMultCT++;
            }
        }
    }

    //Positivo, Negativo ou Zero
    for(int i = 0; i < num; i++)
    {
        if(vetNum[i] > 0)
        {
            qntPos++;
        }

        if(vetNum[i] < 0)
        {
            qntNeg++;
        }

        if(vetNum[i] == 0)
        {
            qntZero++;
        }
    }

    //Maior e Menor

    menor = vetNum[0];
    maior = vetNum[0];

    for(int i = 0; i < num; i++)
    {
        if(vetNum[i] < menor)
        {
            menor = vetNum[i];
        }

        if(maior < vetNum[i])
        {
            maior = vetNum[i];
        }
    }



    cout << "\nEstatísticas Adquiridas: ";
    cout << "\nQuantidade de Numeros Pares: " << qntPar;
    cout << "\nQuantidade de Numeros Impares: " << qntImpar;
    cout << "\nQuantidade de Numeros Positivos: " << qntPos;
    cout << "\nQuantidade de Numeros Negativos: " << qntNeg;
    cout << "\nQuantidade de Zeros: " << qntZero;
    cout << "\nQuantidade de Numeros Multiplos de Tres: " << qntMultT;
    cout << "\nQuantidade de Numeros Multiplos de Cinco: " << qntMultC;
    cout << "\nQuantidade de Numeros Multiplos de Tres e Cinco: " << qntMultCT;
    cout << "\nMaior Número: " << maior;
    cout << "\nMenor Número: " << menor;

    float mediaPar = (somaPar / qntPar);
    float mediaImpar = (somaImpar / qntImpar);

    cout << "\nMedia dos Numeros Pares: " << mediaPar;
    cout << "\nMedia dos Numeros Impares: " << mediaImpar;
}