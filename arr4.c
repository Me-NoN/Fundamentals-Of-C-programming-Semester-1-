//Calculate the scalar product of elements in one array
 #include <stdio.h>
void main()
{
	int a[10];
	int n,i,sv,d;
	printf ("Enter Number Of Elements : ");
	scanf("%d",&n);
	if (n>10)
	{
		printf("Out of Bounds");
		exit(0);
	}
	
	for(i=0;i<n;i++)
	{	printf("Enter Element - %d:",i);
		scanf("%d", &a[i]);}
	printf("Enter Scalar Value :");
	scanf("%d",&sv);
	printf("elements in the array : \n");
	for(i=0;i<n;i++)	
	{d=a[i];
	printf("%d \t",d*sv);}
}
