#include <iostream>
#include <stack>

using namespace std;

int main() {
stack<int> pilha;

pilha.push(50);
pilha.push(60);
pilha.pop();// Remove o número 60 (o último elemento inserido) do topo

cout << "Elemento no topo após remoção: " << pilha.top() << endl;
}