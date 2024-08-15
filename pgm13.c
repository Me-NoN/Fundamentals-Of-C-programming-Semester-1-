#include <stdio.h>
int main()
{
	int dn,dnc,bn=0,r,f=1;
	printf("Enter a Decimal Number :");
	scanf("%d",&dn);
	dnc=dn;
	while (dn!=0)
	{
		r=dn%2;
		bn=bn+r*f;
		f=f*10;
		dn=dn/2;
	}
	printf("%d to Binary is : %d",dnc,bn);
}
