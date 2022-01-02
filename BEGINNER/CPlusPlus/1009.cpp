#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    string nome;
    double salario = 0.0;
    double vendido = 0.0;
    
    cin >> nome;
    cin >> salario;
    cin >> vendido;
    

    double sal = (vendido * 0.15) + salario;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << sal << endl;
return 0;
}
