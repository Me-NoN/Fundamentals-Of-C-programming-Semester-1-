//read n elements and copy it to another array and reverse print it
#include <stdio.h>
void main()
{
	int a[100],b[100];
	int n,i,x;
	printf ("Enter Number Of Elements : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter Element %d:",i);
		scanf("%d",&a[i]);}
	for (i=0;i<n;i++)
	{	b[i]=a[i];}
	printf("Elements in The first Array are :\n");
	for (i=0;i<n;i++)
	{ printf("%d \t",a[i]);}
	printf("\nElements in The Second Array are :\n");
	for (i=n-1;i>=0;i--)
	{ printf("%d \t",b[i]);}
}
