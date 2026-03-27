/*
    1- Criar um programa que registre informações de vários
    pacientes, incluindo nome, idade e um sintoma específico. O
    programa deve permitir a entrada de dados para múltiplos
    pacientes até que o usuário decida parar.
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

    struct InfoPaciente
    {
        string nome;
        int idd;
        string sintoma;
    };
    

int main()
{
    setlocale(LC_ALL, "Portuguese");

    InfoPaciente info;
        char continua = 's';
        int qnt = 0;

        do
        {
            qnt++;

            cout << "Qual o nome do paciente? ";
            getline(cin, info.nome);

            cout << "Qual sua idade? ";
            cin >> info.idd;

        cin.ignore(); //limpa buffer

            cout << "Qual seu sintoma? ";
            getline(cin, info.sintoma);

            cout << "\n---Cadastro dos Pacientes---";
                cout << "\nNome: " << info.nome << endl;
                cout << "Idade: " << info.idd << endl;
                cout << "Sintomas: " << info.sintoma << endl;
                cout << "-=-=-=-=-=-=-=-=-=-=-=-" << endl;

            cout << "Deseja adicionar outro paciente? ";
            cin >> continua;
            
            cin.ignore(); //limpa buffer
            
        }while(continua == 's' || continua == 'S');
    
        return 0;
}