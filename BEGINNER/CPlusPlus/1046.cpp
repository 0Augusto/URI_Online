#include <iostream>

using namespace std;

int main(){
    int hInicial, hFinal = 0;

    cin >> hInicial >> hFinal;
    
    if (hInicial > hFinal){
        int x = (24 - (hInicial - hFinal));
        cout << "O JOGO DUROU " << x << " HORA(S)" << endl;
    }    
    else if (hFinal > hInicial){
        int y = (hFinal - hInicial);
        cout << "O JOGO DUROU " << (hFinal - hInicial) << " HORA(S)" << endl;
    }
    else{
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
return 0;
}
