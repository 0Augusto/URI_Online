//Bibliotecas
#include <iostream>
#include <map>//ARmazena em uma variavel
#include <string>//Uso de strings

using namespace std;

int main()
{
    std::map<int, std::string> dddMap;
    
    // Preenchendo o mapa com os códigos DDD e suas respectivas cidades
    dddMap[61] = "Brasilia";
    dddMap[71] = "Salvador";
    dddMap[11] = "Sao Paulo";
    dddMap[21] = "Rio de Janeiro";
    dddMap[32] = "Juiz de Fora";
    dddMap[19] = "Campinas";
    dddMap[27] = "Vitoria";
    dddMap[31] = "Belo Horizonte";
    
    int ddd;
    std::cin >> ddd;
    
    // Verificando se o DDD existe no mapa
    if (dddMap.count(ddd) > 0) {
        std::cout << dddMap[ddd] << std::endl;
    } else {
        std::cout << "DDD nao cadastrado" << std::endl;
    }
    
return 0;
}
