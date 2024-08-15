/*Program to calculate sum of n numbers*/
#include <stdio.h>
int main()
{
  int i,n,Sum=0,numbers;
  printf("\nPlease Enter How many Number you want?\n");
  scanf("%d",&n);
  printf("\nPlease Enter the elements one by one\n");
  for(i=0; i<n;)
   {
   	i=i+1;
   	scanf("%d",&numbers);
     	Sum = Sum + numbers;
   }
   printf("\nSum of the %d Numbers = %d\n\n",n, Sum);
}

