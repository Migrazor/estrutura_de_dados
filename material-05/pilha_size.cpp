#include <iostream>
#include <stack>

using namespace std;

int main() {
stack<string> pilha;

pilha.push("pacote 1");
pilha.push("pacote 2");
pilha.push("pacote 3");
pilha.push("pacote 4");

cout << "Tamanho da pilha: " << pilha.size() << endl;

pilha.pop();

cout << "Tamanho da pilha após remoção: " << pilha.size() << endl;
}