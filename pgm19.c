/*Find Factors*/
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter number you want to find factors of :");
	scanf("%d",&n);
	while (i<=n)
	{
		if (n%i==0)
			printf("%d,",i);
		i++;
		
	}
}
