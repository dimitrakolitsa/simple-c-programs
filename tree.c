#include <stdio.h>

int main(void)
{
    int h,j,i,o,b; //h for height
    printf("Eisagete enan 8etiko arithmo apo to 4 ews to 20 gia to ypsos tou dentrou:\n");
    scanf("%d",&h);
    j=2*h-1;

    if (h<4 || h>20)
        printf("Sfalma!\n");
    else if (h>=4 && h<=20)

       { for (i=1;i<=h;i++)
           {for (b=1; b<=2*h-1; b++)
             {
                 if (b>=h-(i-1) && b<=h+(i-1))
                    printf("*");
                 else
                    printf(" ");
             }
             printf("\n");
           }
        for (o=0;o<h;o++)
        {
            if (o!=h/2)
                printf(" ");
            else
                printf("*");
        }
       }




    return 0;
}
