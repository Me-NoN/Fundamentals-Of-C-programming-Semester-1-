/*Program to calculate avg of n numbers*/
#include <stdio.h>
int main()
{
  int i,n,Sum=0,numbers;
  float avg;
  printf("\nPlease Enter How many Numbers you want?\n");
  scanf("%d",&n);
  printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;)
   {
   	i=i+1;
   	scanf("%d",&numbers);
     	Sum = Sum + numbers;
   }
   avg = Sum/n;
   printf("\nAverage of the %d Numbers = %f",n, avg);
}

