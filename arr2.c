//read n elements and reverse print it.
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[100];
	int n,i;
	printf ("Enter Number Of Elements : ");
	scanf("%d",&n);
	if (n>100)
	{
		printf("Out of Bounds");
		exit(0);
	}
	printf("Enter Elements :");
	for(i=0;i<n;i++)
	{	
		scanf("%d",& a[i]);
	}
	printf("Array is :");
	for(i=(n-1);i>=0;i--)
	{	
		printf("%d,",a[i]);
	}
	printf("\n");
}
