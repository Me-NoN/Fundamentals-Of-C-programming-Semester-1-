/*Position of  a number*/
#include <stdio.h>
void main()
{
	int n,d,dig,pl=1;
	printf("Enter a Number :");
	scanf("%d",&n);
	printf("Enter a Number you want to find the position of :");
	scanf("%d",&dig);
	while (n>0)
	{
		d=n%10;
		if (d==dig)
		{	printf("Number found at %d's place \n",pl);
			n=n/10;
			pl=pl*10;
		}
		else
		{
			pl=pl*10;
			n=n/10;
		}
		
	}
}	

