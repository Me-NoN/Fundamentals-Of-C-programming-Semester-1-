#include <stdio.h>
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
void main()
{
	int a,b,c;
	printf("Enter Number 1 :");
	scanf("%d",&a);
	printf("Enter Number 2 :");
	scanf("%d",&b);
	c=sum(a,b);
	printf("Sum of 1 and 2 :%d \n",c);
}
