#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    double N1, N2, N3, N4, Nexame = 0.0;
    
    
    int P1 = 2;
    int P2 = 3;
    int P3 = 4;
    int P4 = 1;
    
    cin >> N1 >> N2 >> N3 >> N4;

    
    double media = ((N1 * P1) + (N2 * P2) + (N3 * P3) + (N4 * P4))/(P1 + P2 + P3 + P4);

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }

    else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }

    else if (media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> Nexame;
        double mediaFinal = (media + Nexame)/2;
        cout << "Nota do exame: " << Nexame << endl;
        cout << "Aluno aprovado." << endl;
        cout << "Media final: " <<  mediaFinal << endl;
    }

    else{
        cout << "Periodo --" << endl;
    }
return 0;    
}
