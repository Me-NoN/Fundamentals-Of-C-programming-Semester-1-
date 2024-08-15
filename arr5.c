//Vector Addition
 #include <stdio.h>							
void main()
{
	int a[10],b[10],c[10];
	int n,i;
	printf ("Enter Number Of Elements : ");
	scanf("%d",&n);
	if (n>10)
	{
		printf("Out of Bounds");
		exit(0);
	}
	printf("\nArray A\n");
	for(i=0;i<n;i++)
	{	
	printf("A.Enter Element - %d:",i);
		scanf("%d", &a[i]);}
	printf("\nArray B\n");	
	for(i=0;i<n;i++)
	{	
	printf("B.Enter Element - %d:",i);
		scanf("%d", &b[i]);}
	for(i=0;i<n;i++)
	{ c[i]=a[i]+b[i];}
	printf("Array A and Array B Added \n ");
	for(i=0;i<n;i++)
	{printf("%d \t", c[i]);}
}
