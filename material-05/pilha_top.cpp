#include <iostream>
#include <stack>

using namespace std;

int main(){
stack<string> pilha;

pilha.push("pacote 1");
pilha.push("pacote 2");

// Retorna o elemento no topo sem removê-lo
cout << "Elemento no topo: " << pilha.top() << endl;
}