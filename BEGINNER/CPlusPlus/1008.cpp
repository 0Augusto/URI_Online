#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() 
{
    int numFunc    = 0;
    int horaTrab   = 0;
    double valHora = 0.0;
 
    cin >> numFunc;
    cin >> horaTrab;
    cin >> valHora;
    
    double salary = (horaTrab * valHora);
    
    cout << "NUMBER = " << numFunc << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
return 0;
}
