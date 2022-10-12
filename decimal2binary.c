#include <stdio.h>
int main (void)
{
    int n; // n for number
    printf("Eisagete enan akeraio ari8mo apo to 0 ews to 15:");
    scanf("%d", &n);

    int n1,n2,n3,n4;
    int a,b,c,d;
    a= n/2;
    n1= n%2;
    b=a/2;
    n2=a%2;
    c=b/2;
    n3=b%2;
    n4=c%2;

    if (n<= 15) // prepei kai n>=0
    printf("O ari8mos %d se dyadiko systhma einai: %d%d%d%d", n, n4, n3, n2, n1);

    else
    printf("O ari8mos pou eisagagate den anhkei sto diasthma [0,15]. Try again.");

    return 0;


}
