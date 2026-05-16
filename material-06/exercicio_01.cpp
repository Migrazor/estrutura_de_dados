#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    system("cls");

    queue <string> fila;
    queue <string> filaBackup;
    int escolha = 0;
    string nome;
    int qnt = 0;
    int cliente = 0;

    cout << "Bem-vindo ao sistema de atendimento!!";

    do
    {
        cout << "\nSelecione o serviço: \n[1] - Inserir Cliente na fila \n[2] - Atender Próximo Cliente" <<
        "\n[3] - Exibir Fila de Espera \n[4] - Encerrar Programa" <<
        "\nEscolha: ";
        cin >> escolha;

        switch(escolha)
        {
            case 1: //Adicionar Clientes
            cout << "\n-=-=-=-=-=-ADICIONAR CLIENTE-=-=-=-=-=-";
            system("cls");
            cliente++;
            qnt++;

                cout << "\nCliente " << cliente;
                cout << "\nQual o nome do cliente? ";
            cin.ignore();
                getline(cin, nome);
                fila.push(nome);  
                filaBackup.push(nome);          
            
            break;

            case 2: //Atender o próximo
            system("cls");
            cout << "\n-=-=-=-=-=-PRÓXIMO DA FILA-=-=-=-=-=-";
            qnt--;

                cout << "\nO cliente " << fila.front() << " esta sendo atendido.";
                fila.pop();

            break;

            case 3: //Mostrar fila
            system("cls");
            filaBackup = fila;

            cout << "\n-=-=-=-=-=-STATUS DA FILA-=-=-=-=-=-";
                cout << "\nAguardando na fila: " << qnt << endl;
                while(!filaBackup.empty())
                {
                    cout << "\t- " << filaBackup.front() << endl;
                    filaBackup.pop();
                }
                
            break;

            default:
                cout << "\n-=-=-=-=-=-PROGRAMA ENCERRADO-=-=-=-=-=-";
            break;
        }

    }while(escolha != 4);
}