/*
Exercicio:
    Faça um algoritmo que represente uma fila de atendimento.
    1. Insira tres nomes
    2. Mostre quem será atendido primeiro
    3. Atenda uma pessoa, removendo-a da fila
    4. Mostre quantas pessoas estão aguardando
    5. Exiba os nomes restantes em ordem de atendimento
*/
#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> fila;
    fila.push("Bruno");
    fila.push("Luis");
    fila.push("Ana");

    std::cout << "Atendento o primeiro da fila: " << fila.front() << std::endl;
    fila.pop();
    std::cout << "Total de pessoas na fila: " << fila.size() << std::endl;

    while (!fila.empty()) {
        std::cout << "Proximo: " << fila.front() << std::endl;
        fila.pop();
    }

    return 0;
}