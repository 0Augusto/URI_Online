#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C = 0.0;

    cin >> A;
    cin >> B;
    cin >> C;
//PA = peso da nota A; PB = peso da nota B; PC = peso da nota C
    int PA = 2;
    int PB = 3;
    int PC = 5;

    double media = ((A * PA) + (B * PB) + (C * PC))/(PA + PB + PC);
//fixed << setprecision(number) para a precisao(qtd) das casa decimais 
    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
Return 0;
}//end main
