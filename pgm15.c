/*Check Whether numbner is palindrome */
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
	if (nc==rev)
	{
		printf("%d is Palindrome",rev);
	}
	else
	{
		printf("%d is Not palindrome",rev);
	}
}
