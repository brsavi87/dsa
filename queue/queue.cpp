#include <iostream>
#include <queue>

int main() {
    /*
        Classe Queue.
        Interface:
        - push(valor): Adiciona um elemento ao final da fila
        - pop(): Remove o primeiro elemento da fila
        - front(): Consulta o primeiro elemento da fila sem removê-lo
        - empty(): Verifica se a fila está vazia
    */

    std::queue<int> fila;
    fila.push(10);
    fila.push(20);
    fila.push(30);
    fila.push(40);
    fila.push(50);
    fila.push(60);

    std::cout << "Primeiro da fila: " << fila.front() << std::endl;
    
    fila.pop();
    std::cout << "Primeiro da fila: " << fila.front() << std::endl;
    std::cout << "Tamanho da fila: " << fila.size() << std::endl;

    while (!fila.empty()) {
        std::cout << "Elemento: " << fila.front() << std::endl;
        fila.pop();
    }

    

    return 0;
}