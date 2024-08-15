/*Find Largest and smallest*/
#include<stdio.h>

int main()
{
    int n, i,lg,sm;
    float num;
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("Enter number-1: ");
    scanf("%f", &num);
    lg = num;
    sm = num;
    i=2;
    while(i<=n)
    {
        printf("Enter number-%d: ",i);
        scanf("%f", &num);
        if(num>lg)
        {
            lg = num;
        }
        if (num<sm)
        {
            sm = num;
        }
        i++;
    }
    printf("\nLargest = %d", lg);
    printf("\nSmallest = %d \n", sm);
}

