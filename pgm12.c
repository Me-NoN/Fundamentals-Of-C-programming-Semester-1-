/*Armstrong*/
#include <stdio.h>
int main()
{
	int n,nc,r,s=0;
	printf("Enter a Number :");
	scanf("%d",&n);
	nc=n;
	while (n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if (nc==s)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is Not Armstrong");
	}
}
