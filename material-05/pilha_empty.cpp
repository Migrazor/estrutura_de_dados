#include <iostream>
#include <stack>

using namespace std;

int main() {
stack<int> pilha;

cout << "A pilha está vazia? " << (pilha.empty() ? "Sim" : "Não") << endl;

pilha.push(10);

cout << "A pilha está vazia? " << (pilha.empty() ? "Sim" : "Não") << endl;
}