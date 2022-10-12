#include <stdio.h>
#include <math.h>

int main (void)
{

    const double p = 3.141592;
    double r;
    printf("Dwse thn aktina:\n");
    scanf("%lf", &r);

    double C;
    C= 2*p*r;
    double A;
    double d;
    d = pow(r,2.);
    A= p*d;

    printf("H perimetros tou kyklou einai: %lf\n", C );
    printf("To emvadon tou kyklou einai: %lf\n", A);
    return 0;

}
