/* Swapping two numbers */
#include <stdio.h>
void main()
{	
	int a,b,c;
	printf("Enter Number 1:");
	scanf("%d",&a);
	printf("Enter Number 2:");
	scanf("%d",&b);
	printf("\nNumber 1 is :%d \n\n",a );
	printf("\nNumber 2 is :%d \n",b );
	c=a;
	a=b;
	b=c;
	printf("\nThe swapped value for 1 is :%d\n",b);
	printf("\nThe swapped value for 2 is :%d\n",a);
}
