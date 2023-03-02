#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double cedula[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    double val    = 0.0;
    double x = val/cedula;
    double y = val/moedas;

    puts("Insira um valor em reais!");
    scanf ("%lf", &val);

for (int N = 0; N < 1000000.00; N++){
    if(x){
        printf("%d nota(s) de R$ ", cedula);
    }//end if
    else if (y){
        printf("%d moeda(s) de R$ ", moedas);
    }//end else if
    else{
        puts("Tu eh muito burro!");
    }//end else
}//end for
}//end main
