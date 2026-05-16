#include <iostream>
#include <stack>

using namespace std;

int main() {
stack <int> pilha;

pilha.push(100);// Adiciona o número 100 a pilha
pilha.push(200);// Adiciona o número 200 a pilha

cout << "Elemento no topo apos insercao: " << pilha.top() << endl;
}