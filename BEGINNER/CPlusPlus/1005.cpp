//Colocar parenteses para somar os valores do numerador, caso contrário pegará o segundo valor e dividirá pelo denominador

#include <iostream>
//Se tem número em ponto flutuante (float/double), use essa biblioteca e seja preciso, young Padawan.
#include <iomanip> //Biblioteca para poder manipular a quantidade de casas decimais.

using namespace std;

int main()
{
    double A, B = 0.0;
    
    double P1 = 3.5;
    double P2 = 7.5;
    
    cin >> A;
    cin >> B;

    double media = ((A * P1) + (B * P2))/(P1 + P2);
    
    //Não há a necessidade de utilizar o 'fixed', porém, pode acontecer arredondamentos e não ter a quantidade de casas decimais estipuladas pelo desenvolvedor.
    cout << "MEDIA = " << fixed << setprecision (5) << media << endl;
return 0;
}//end main
