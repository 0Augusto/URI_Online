#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() 
{
    int R = 0;
    double pi = 3.14159;
    
    cin >> R;
    
    double vol = ((4.0/3.0) * pi * pow(R, 3));
 
    cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;
return 0;
}
