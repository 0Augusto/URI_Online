/*
A ordem de complexidade do código fornecido é constante, O(1). Isso ocorre porque o código não possui loops ou estruturas de repetição que dependam do tamanho de entrada. Em vez disso, o código simplesmente verifica as condições if-else aninhadas com base nas strings de entrada fornecidas e imprime uma saída correspondente.

Independentemente do tamanho das strings de entrada, o número de comparações e verificações condicionais é fixo. Portanto, o tempo de execução do código não aumenta à medida que o tamanho das strings aumenta. A complexidade do código permanece constante, o que significa que o tempo de execução é independente do tamanho do problema.
*/

#include <iostream>
#include <string>

int main() {
    std::string palavra1, palavra2, palavra3;

    std::cin >> palavra1 >> palavra2 >> palavra3;

    if (palavra1 == "vertebrado") {
        if (palavra2 == "ave") {
            if (palavra3 == "carnivoro") {
                std::cout << "aguia" << std::endl;
            } else if (palavra3 == "onivoro") {
                std::cout << "pomba" << std::endl;
            }
        } else if (palavra2 == "mamifero") {
            if (palavra3 == "onivoro") {
                std::cout << "homem" << std::endl;
            } else if (palavra3 == "herbivoro") {
                std::cout << "vaca" << std::endl;
            }
        }
    } else if (palavra1 == "invertebrado") {
        if (palavra2 == "inseto") {
            if (palavra3 == "hematofago") {
                std::cout << "pulga" << std::endl;
            } else if (palavra3 == "herbivoro") {
                std::cout << "lagarta" << std::endl;
            }
        } else if (palavra2 == "anelideo") {
            if (palavra3 == "hematofago") {
                std::cout << "sanguessuga" << std::endl;
            } else if (palavra3 == "onivoro") {
                std::cout << "minhoca" << std::endl;
            }
        }
    }

    return 0;
}

