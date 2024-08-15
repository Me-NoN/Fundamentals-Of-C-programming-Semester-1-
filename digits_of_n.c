/*Digits of n numbers*/
#include <stdio.h>
void main()
{
	int num,digit;
	printf("Write any Natural number:");
	scanf("%d",&num);
	while (num>0)
	{
		digit=num%10;
		printf("%d\n",digit);;
		num=num/10;
	}
}
