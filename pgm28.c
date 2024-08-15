/*Pascals Triangle*/
#include <stdio.h>
int main()
{
    int rows,i,j,spc,c=1;
    printf("Enter the row for pascal triangle: ");
    scanf("%d",&rows);
    i=0;
    while(i<rows)
    {
        spc=1;
        while( spc<=rows-i)
        {
            printf("  ");
            spc++;
        }
        j=0;
        while( j<=i)
        {
            if(j==0 || i==0)
                c=1;
            else
                c=c*(i-j+1)/j;
                printf("%4d",c);
                j++;
        }
        printf("\n");
        i++;
    }
}


