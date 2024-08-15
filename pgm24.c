/*GCD of 3 Numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,n,i=1;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 3:");
    scanf("%d",&c);
    while (i<=a && i<=b && i<=c)
    {
            if (a%i==0 && b%i==0 && c%i==0)
                n=i;
        i++;
    }
    printf("GCD is %d ",i);
}

