#include <stdio.h>

double leao (double sal)
{
    if (sal >= 0.0 && sal <= 2000.00)
    {
        puts("Isento");

    }//end if
    else if (sal >= 2000.01 && sal <= 3000.00)
    {
        double imposto = (sal * 0.92);
    }//end else if
    else if(sal >= 3000.01 && sal <= 4500.00)
    {
        double imposto = (sal * 0.82);
    }//end else if
    else if (sal > 4500.00)
    {
        double imposto = (sal * 0.72); 
    }//end else if
    else
    {
        puts("Volte aqui");
    }//end else
}//end leao

int main()
{
    double recebe = 0.0;
    puts ("Insira o salario.");
    scanf("%lf", &recebe);

    printf("%lf", leao);
}//end main
