/*Generate the following series 1,8,27....*/
#include <stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a Range:");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("%d, ",i*i*i);
		i++;
	}
}
