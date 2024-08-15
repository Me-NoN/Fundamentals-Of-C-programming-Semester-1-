/*Floyd's Triangle*/
#include <stdio.h>
void main()
{
	int n,i=1,j=1,s;
	printf("Enter Total Rows :");
	scanf("%d",&n);
	printf("\n");
	while (i<=n)
	{
		s=1;
		while (s<=i)
		{	
			printf("%d  ",j);
			j++;
			s++;
		}
		i++;
		printf("\n");
	}
}
