//Read n elements and print it using arrays.
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[10];
	int n,i;
	printf ("Enter Number Of Elements : ");
	scanf("%d",&n);
	if (n>10)
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
	for(i=0;i<n;i++)
	{	
		printf("%d,",a[i]);
	}
	printf("\n");
}

