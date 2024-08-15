#include <stdio.h>
int fib(int n)
{
	if (n==1)
		return 1;
	else if (n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
void main()
{
	int n,f;
	printf("Enter a Number:");
	scanf("%d",&n);
	f=fib(n);
	printf("Fibonocci Series of  %d is : %d \n",n,f);
}		
