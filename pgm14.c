/*Reverse a number*/
#include <stdio.h>
int main()
{
	int n,rev=0,nc;
	printf("Enter a Number :");
	scanf("%d",&n);
	nc=n;
	while (n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	printf("Reverse of %d is : %d",n,rev);
}	

