/*Perfect Numbers*/
#include <stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter a Number :");
	scanf("%d",&n);
	while (i<n)
	{
		if (n%i==0)
		{
			s=s+i;
		}
		i++;
	}
	if (s==n)
	{	
		printf("Number is Perfect.");
	}
	else
	{
		printf("Number is Not Perfect");
	}
}
