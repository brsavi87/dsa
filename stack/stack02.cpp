#include <iostream>
#include <stack>

int main() {

    std::stack<int> pilha;
    std::cout << "Tamanho: " << pilha.size() << std::endl;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);

    //Verificar tamanho da pilha com 4 elementos de memoria.
    std::cout << sizeof(pilha) << " bytes" << std::endl;

    std::cout << "Tamanho: " << pilha.size() << std::endl;
    std::cout << "Topo: " << pilha.top() << std::endl;

    std::cout << "\nRemovendo: ";
    while (!pilha.empty()) {
        std::cout << pilha.top() << " | ";
        pilha.pop();
    }
    std::cout << std::endl;

    //Verificar tamanho da pilha vazia de memoria.
    std::cout << sizeof(pilha) << " bytes" << std::endl;

    return 0;
}