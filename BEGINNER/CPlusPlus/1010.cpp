#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    int code1, code2, numProd1, numProd2 = 0;
    double valProd1, valProd2 = 0.0;
    
    cin >> code1 >> numProd1 >> valProd1;
    cin >> code2 >> numProd2 >> valProd2;
 
    double valTotal = (numProd1 * valProd1) + (numProd2 * valProd2); 
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valTotal << endl;
return 0;
}
