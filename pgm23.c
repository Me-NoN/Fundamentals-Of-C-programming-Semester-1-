/*LCM of 3 Numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,n=2,i=0;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 3:");
    scanf("%d",&c);
    while (i==0)
    {
            if (n%a==0 && n%b==0 && n%c==0)
                i=n;
        n++;
    }
    printf("LCM is %d ",i);
}

