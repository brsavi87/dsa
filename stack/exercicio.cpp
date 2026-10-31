/*
Exercicio:
    Usando Stack e um algoritmo que verifique 
    se uma expressão é ou não balanceada.
    Exemplos:
    (a + b) -> balanceada
    (a + b)) -> não balanceada
*/
#include <iostream>
#include <stack>
#include <string>

class TestadorDeExpressoes {
    private:
        bool testaChaves(std::string expressao) {
            std::stack<char> pilhaChaves;
            for(const char &item : expressao) {
                if (item == '{') {
                    pilhaChaves.push(item);
                } else if (item == '}') {
                    if (pilhaChaves.empty()) {
                        return false;
                    }
                    pilhaChaves.pop();
                } 
            }
            return pilhaChaves.empty();
        }
        bool testaColchetes(std::string expressao) {
            std::stack<char> pilhaColchetes;
            for(const char &item : expressao) {
                if (item == '[') {
                    pilhaColchetes.push(item);
                } else if (item == ']') {
                    if (pilhaColchetes.empty()) {
                        return false;
                    }
                    pilhaColchetes.pop();
                } 
            } 
            return pilhaColchetes.empty();
        }
        bool testaParenteses(std::string expressao) {
            std::stack<char> pilhaParenteses;
            for(const char &item : expressao) {
                if (item == '(') {
                    pilhaParenteses.push(item);
                } else if (item == ')') {
                    if (pilhaParenteses.empty()) {
                        return false;
                    }
                    pilhaParenteses.pop();
                } 
            } 
            return pilhaParenteses.empty();
        }
    public:
        std::string testar(std::string expressao) {
            bool balanceChaves = testaChaves(expressao);
            bool balanceColchetes = testaColchetes(expressao);
            bool balanceParenteses = testaParenteses(expressao);
            if (balanceChaves==true && balanceColchetes==true && balanceParenteses==true) {
                return "Equacao balanceada";
            }
            return "Equacao desbalanceada";
        }
};

int main() {

    std::string expressao = "{[(a + b)]}";
    TestadorDeExpressoes teste;
    std::cout << expressao << ": " << teste.testar(expressao) << std::endl;

    std::string expressao2 = "{[(a + b)}";
    TestadorDeExpressoes teste2;
    std::cout << expressao2 << ": " << teste2.testar(expressao2) << std::endl;

    std::string expressao3 = "){[(a + b)]}";
    TestadorDeExpressoes teste3;
    std::cout << expressao3 << ": " << teste3.testar(expressao3) << std::endl;

    return 0;
}