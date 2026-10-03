/* Demonstracao do algoritimo Two-Pointers */
#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main() {

    //Iniciando um vetor com itens de compras
    std::vector<std::string> compras = {
        "sal",
        "arroz",
        "batata",
        "macarrao",
        "azeite"
    };

    //Iniciando ponteiros
    int esquerda = 0;
    int direita = static_cast<int>(compras.size() - 1);

    //Iniciando laco
    while (esquerda < direita) {
        //Trocar os elementos de posicao
        std::swap(compras[esquerda], compras[direita]);
        //Mover os ponteiros em direcao ao centro
        esquerda++;
        direita--;
    };

    std::cout << "\nArray invertido - utilizando Two-Pointers: " << std::endl;
    for (const auto &item : compras) {
        std::cout << " - " << item << std::endl;
    };

    return 0;
}