/*Fibonacci Series*/
#include <stdio.h>
int main()
{
	int r,ft=0,st=1,nt=0;
	printf("Enter range:");
	scanf("%d",&r);
	printf("%d",st);
	nt=ft+st;
	while (nt<=r)
	{
		printf(", %d ",nt);
		ft=st;
		st=nt;
		nt=ft+st;
	}
}
