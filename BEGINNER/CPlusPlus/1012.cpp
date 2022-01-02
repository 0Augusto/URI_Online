#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    
    double A, B, C = 0;
    double pi = 3.14159;
    
    cin >> A >> B >> C;
    
    double areaTrian = (A * C)/2.0;
    
    double areaCirc = (pi * pow(C, 2));

    double areaTrap = ((A + B) * C)/2.0;
    
    double areaQuad = pow(B, 2);
    
    double areaRet = (A * B);
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTrian << endl;
    cout << "CIRCULO: "   << fixed << setprecision(3) << areaCirc  << endl;
    cout << "TRAPEZIO: "  << fixed << setprecision(3) << areaTrap  << endl;
    cout << "QUADRADO: "  << fixed << setprecision(3) << areaQuad  << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRet   << endl;
return 0;
}
