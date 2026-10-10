#include <iostream>
#include <vector>

template <typename Iterator>
int busca_binaria(Iterator inicio_dados, Iterator fim_dados, int valor) {
    int quantidade = static_cast<int>(fim_dados - inicio_dados);
    int inicio = 0;
    int fim = quantidade - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        int elemento_meio = *(inicio_dados + meio);
        if (elemento_meio == valor) {
            return meio;
        } else if (elemento_meio < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        } 
    }
    return -1;
}

int main() {

    int numeros_array[9] = {
        2,3,4,5,8,12,16,23,38
    };

    std::vector<int> numeros_vector = {
        2,5,8,12,16,23,38
    };

    int valor_procurado = 16;

    int resultado_array = busca_binaria(numeros_array, numeros_array + 9 , valor_procurado);
    std::cout << "Indice no Array: " << resultado_array << std::endl;

    int resultado_vector = busca_binaria(numeros_vector.begin(), numeros_vector.end(), valor_procurado);
    std::cout << "Indice no Vector: " << resultado_vector<< std::endl;

    return 0;
}