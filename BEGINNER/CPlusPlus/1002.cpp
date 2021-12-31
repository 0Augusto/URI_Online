#include <iostream>
#include <cmath>
//Se tem número em ponto flutuante (float/double), use essa biblioteca e seja preciso, young Padawan.
#include <iomanip> //Biblioteca para poder manipular a quantidade de casas decimais.

using namespace std;

int main()
{
    double n = 3.14159;
    double R = 0.0;
    

    cin >> R;

    double A = (n * pow(R, 2));
    //Não há a necessidade de utilizar o 'fixed', porém, pode acontecer arredondamentos e não ter a quantidade de casas decimais estipuladas pelo desenvolvedor.	
    cout << "A=" << fixed << setprecision(4) << A << endl;
return 0;
}//end main
