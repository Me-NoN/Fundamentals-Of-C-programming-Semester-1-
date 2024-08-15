/*pyramid star pattern*/
#include<stdio.h>
  
int main()
{
    int n, i = 0, j=0,s=0;
  
    printf("Enter no of rows of Pyramid\n");
    scanf("%d", &n);
  
    while(i <= n)
    {
        s = 0;
        while( s< (n-i)+1 )
        {
            printf(" ");
            s++;
        }
  
        j = 0;
        while(j < (i+1))
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}

