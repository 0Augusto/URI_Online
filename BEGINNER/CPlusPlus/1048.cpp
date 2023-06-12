#include <iostream>// bibliotrca para entrada e saida de dad
#include <iomanip>// biblioteca para o setprecision

using namespace std;

int main()
{
    double sal, percent = 0.0;

    cin >> sal;

    if (sal >= 0 && sal <= 400.00)
    {
        double sal1 = (sal * 1.15);
        cout << "Novo salario: " << fixed << setprecision(2) << sal1 << endl;
        double reajuste = (sal1 - sal);
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        percent = (1.15 - 1.00) * 100;
    }
    else if(sal >= 400.01 && sal <= 800.00)
    {
        double sal2 = (sal * 1.12);
        cout << "Novo salario: " << fixed << setprecision(2) << sal2 << endl;
        double reajuste = (sal2 - sal);
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        percent = (1.12 - 1.00) * 100;
    }
    else if (sal >= 800.01 && sal <= 1200.00)
    {
        double sal3 = (sal * 1.10);
        cout << "Novo salario: " << fixed << setprecision(2) << sal3 << endl;
        double reajuste = (sal3 - sal);
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        percent = (1.10 - 1.00) * 100;
    }
    else if (sal >= 1200.01 && sal <= 2000.00)
    {
        double sal4 = (sal * 1.07);
        cout << "Novo salario: " << fixed << setprecision(2) << sal4 << endl;
        double reajuste = (sal4 - sal);
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        percent = (1.07 - 1.00) * 100;
    }
    else if(sal >= 2000.00)
    {
        double sal4 = (sal * 1.04);
        cout << "Novo salario: " << fixed << setprecision(2) << sal4 << endl;
        double reajuste = (sal4 - sal);
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        percent = (1.04 - 1.00) * 100;
    }
    else
    {
        cout << "Algo de errado nao esta certo!" << endl;
    }
    cout << "Em percentual: " << fixed << setprecision(0) << percent << " %" << endl;
return 0;
}
