#include <stdio.h>
#include <math.h>

int main (void)
{
    double a,b,c;

    printf("Grapse to a:\n");
    scanf("%lf", &a);

    printf("Grapse to b:\n");
    scanf("%lf", &b);

    printf("Grapse to c:\n ");
    scanf("%lf", &c);

    double D;
    D = pow(b,2) - 4*a*c;
    double r;
    r = sqrt(D);

    float x1;
    float x2;
    float x;

    if (r>0)
    {
    x1= (-b+r)/2*a;
    x2= (-b-r)/2*a;
    printf("H diakrinousa tou triwnymou einai: %f\nH tetragwnikh riza ths diakrinousas einai:%f\nOi rizes tou triwnymou einai:%f , %f\n",D, r, x1, x2);
    }

    if (r==0)
    {
        x = -b/2*a;
        printf("H diakrinousa tou triwnymou einai 0\nH riza tou triwnymou einai: %f\n", x);
    }

    if (r<0)
    {
        printf("H diakrinousa tou triwnymou einai arnhtikh\nTo triwnymo den exei pragmatikes rizes");
    }



    return 0;

}
