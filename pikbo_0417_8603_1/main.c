#include <stdio.h>
#include <stdlib.h>
int main()
{
    float t=512;
    char type='C';
    int check=0;
    printf("Enter: ");
    scanf("%f", &t);
    if (type=='C' || check==1)
    {
        if (t>=-273.15)
        {
            printf("\n\n%.2f C:\n%.2f F\n%.2f K", t, 9*t/5+32,t+273.15);
        }
        else
        {
            printf("\n\ninvalid input(C)");
        }
    }
    if (type=='K' || check==1)
    {
        if (t>=0)
        {
            printf("\n\n%.2f K:\n%.2f F\n%.2f C", t,(t-273.15)*9/5+32 ,t-273.15);
        }
        else
        {
            printf("\n\ninvalid input(K)");
        }
    }
    if (type=='F'|| check==1)
    {
        if (t>=(-273.15)*9/5+32)
        {
            printf("\n\n%.2f F:\n%.2f C\n%.2f K", t, (t-32)*5/9,(t-32)*5/9+273.15);
        }
        else
        {
            printf("\n\ninvalid input(F)");
        }
    }
    return 0;
}
/*
36 C:
&& K
&& F
*/
