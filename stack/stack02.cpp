#include <iostream>
#include <stack>

int main() {

    std::stack<int> pilha;
    std::cout << "Tamanho: " << pilha.size() << std::endl;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    std::cout << "Tamanho: " << pilha.size() << std::endl;
    std::cout << "Topo: " << pilha.top() << std::endl;

    std::cout << "\nRemovendo: ";
    while (!pilha.empty()) {
        std::cout << pilha.top() << " | ";
        pilha.pop();
    }
    std::cout << std::endl;

    // TODO: Verificar tamanho a pilha pelo endereco de memoria.
    return 0;
}