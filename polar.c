#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(void)
{
    double x,y,r;

    printf("Eisagete to x se metra\n");
    scanf("%lf", &x);
    printf("Eisagete to y se metra\n");
    scanf("%lf", &y);

    double o,m,t,u;
    o= pow (x,2);
    m= pow (y,2);

    r= sqrt(o+m);

    t = atan(y/x);

    u= t*180/PI;

     printf("Oi antistoixes syntetagmenes sto poliko systhma einai: r=%3.2lf metra kai t=%2.1lf moires", r, u);


    return 0;



}
