// Sum and average
 #include <stdio.h>
void main()
{

	
	int num;
	int n,i;
        float sum=0.0,avg;
	printf ("Enter Max Value of Array : ");
	scanf("%d",&num);
	int a[num];
	printf("Enter Array Size :");
	scanf("%d",&n);T
	if (n<=num){
	for (i=0;i<n;i++)
		{	printf("Enter Element %d :",i);
			scanf("%d",&a[i]);}
		for (i=0;i<n;i++)
		{	sum=sum+a[i];}
		avg=sum/n;
		printf("Sum of all the Numbers = %f \n",sum);
		printf("Average of all the Numbers = %f \n",avg);}
	else
	{printf("Error : Array Size Exceeds Max Array Value.");}
}

