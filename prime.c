#include <stdio.h>

void main()
{

    int num,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;)
    {
    	i=i+1;
        if(num % i==0)
        {
         c=c+1;
            break;
        }
    }
   if(c==0 && num!= 1)
        printf("%d is a prime number.\n",num);
   else
      printf("%d is not a prime number\n",num);
}
