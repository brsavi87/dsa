#include <array>
#include <iostream>
#include <string>

int main() {

    int tamanho_compras = 3;
    std::array<std::string, 5> compras = {
        "Parmesao",
        "Gorgonzola",
        "Tomate",
    };

    std::cout << "Total de itens em compras: " << tamanho_compras << std::endl;
    //Acesso direto O(1)
    std::cout << "Segundo item: " << compras.at(1) << std::endl;

    //2. Insercao no inicio -> O(n)
    for (int i = tamanho_compras; i > 0; i--) {
        compras.at(i) = compras.at(i - 1);
    }

    compras.at(0) = "Oregano";
    tamanho_compras++;

    //3. Remoção no meio O(n)
    int i_remover = 2;
    for (int i = i_remover; i < tamanho_compras - 1; i++){
        compras.at(i) = compras.at(i + 1);
    }
    tamanho_compras--;
    compras.at(tamanho_compras) = "";

    for(const std::string &item : compras) {
        std::cout << "- " << item << std::endl;
    }

    std::cout << "Total de itens: " << tamanho_compras << std::endl;

    return 0;
}