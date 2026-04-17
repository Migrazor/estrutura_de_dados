/*
Exercício 1 — Sistema de Cálculo de Plano de Saúde

    • Idade do cliente
    • Possui doenças pré-existentes? (S/N)
    • É fumante? (S/N)
    • Renda mensal
    Regras:
    • Valor base por idade:
    • Até 18 anos → R$ 100
    • 19 a 40 anos → R$ 180
    • 41 a 60 anos → R$ 300
    • Acima de 60 anos → R$ 500
*/

#include <iostream>

using namespace std;

struct infoPaciente
{
    int idade;
    char doenca;
    char fuma;
    float renda;
}; 

int main()
{
    infoPaciente info;

    cout << "\nDigite as informacoes do paciente:";
    cout << "\nIdade: ";
    cin >> info.idade;

    cout << "Possui alguma doenca pre-existente? (S/N): ";
    cin >> info.doenca;
        info.doenca = toupper(info.doenca);

    cout << "Voce fuma? (S/N): ";
    cin >> info.fuma;
        info.fuma = toupper(info.fuma);

    cout << "Qual sua renda mensal? (ex: 1520.00): R$";
    cin >> info.renda;
    
    //Valor do plano por idade
    float valorPlano = 0;

        if(info.idade > 60)
        {
            valorPlano = 500;
        }
        else if(info.idade >= 41)
        {
            valorPlano = 300;
        }
        else if(info.idade >= 19)
        {
            valorPlano = 180;
        }
        else
        {
            valorPlano = 100;
        }

    //Acrescimo de valor por doenca
    float taxaDoenca = 0;

        if (info.doenca == 'S' && info.idade <= 40)
        {
            taxaDoenca = (valorPlano * 30) / 100;
        }
        else if (info.doenca == 'S' && info.idade > 40)
        {
            taxaDoenca = (valorPlano * 50) / 100;
        }
        else
        {
            taxaDoenca = 0;
        }
    
    //Acrescimo de valor por tabagismo
    float taxaFumo = 0;

        if (info.fuma == 'S' && info.idade <= 50)
        {
            taxaFumo = (valorPlano * 20) / 100;
        }
        else if (info.fuma == 'S' && info.idade > 50)
        {
            taxaFumo = (valorPlano * 40) / 100;
        }
        else
        {
            taxaFumo = 0;
        }

    //Desconto por renda
    float desconto;
    float valorTotal = valorPlano + taxaDoenca + taxaFumo;

        if(info.renda > 5000)
        {
            desconto = 0;
        }
        else if(info.renda > 2000)
        {
            desconto = (valorTotal * 10) / 100;
        }
        else
        {
            desconto = (valorTotal * 20) / 100;
        }
    
    valorTotal = valorTotal - desconto;

    cout << "\nInformacoes do Paciente: ";
    cout << "\nIdade: " << info.idade << "\n\tValor do Plano: R$" << valorPlano;
    cout << "\nPossui Doenca: " << info.doenca << "\n\tAcrescimo por Doenca: R$" << taxaDoenca;
    cout << "\nFuma: " << info.fuma << "\n\tAcrescimo por Tabagismo: R$" << taxaFumo;
    cout << "\nRenda: R$" << info.renda << "\n\tDesconto por Renda: R$" << desconto;
    cout << endl << "\nValor Total: R$" << valorTotal;
}