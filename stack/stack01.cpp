#include <iostream>
// Biblioteca para tratar excecoes, ex.: std::overflow_error
#include <stdexcept>
#include <vector>

class Pilha {
    /*
        Classe para modelar uma Stack.
        Interface:
        - push(valor): Adiciona um elemento ao topo da pilha
        - pop(): Remove o elemento do topo da pilha
        - top(): Consulta o elemento do topo da pilha sem removê-lo
        - is_empty(): Verifica se a pilha está vazia
        - is_full(): Verifica se a pilha atingiu a capacidade total
    */
    private:
        static const int capacidade = 5;
        int dados[capacidade];
        int topo = -1;

    public:
        // Métodos de verificação de estado
        // 'const' indica que o método não altera o estado da pilha 
        bool is_empty() const {
            return topo == -1;
        }
        bool is_full() const {
            return topo == capacidade - 1;
        }
        void push(int valor) {
            if (is_full()) {
                // Lança uma exceção informando Pilha cheia
                throw std::overflow_error("Pilha cheia");
            }
            topo++;
            dados[topo] = valor;
        }
        int top() const {
            if (is_empty()) {
                // Lança uma exceção informando Pilha vazia
                throw std::underflow_error("Pilha vazia");
            }
            return dados[topo];
        }
        void pop() {
            if (is_empty()) {
                // Lança uma exceção informando Pilha vazia
                throw std::underflow_error("Pilha vazia");
            }
            topo--;
        }
};

int main() {
    Pilha pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    std::cout << "Topo: " << pilha.top() << std::endl;
    pilha.pop();
    pilha.push(50);
    // std::cout << "Topo: " << pilha.top() << std::endl;

    std::cout << "\nRemovendo: ";
    while (!pilha.is_empty()) {
        std::cout << pilha.top() << " | ";
        pilha.pop();
    }
    std::cout << std::endl;

    return 0;
}