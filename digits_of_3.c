/*Digits of a 3 digit number*/
#include <stdio.h>
void main()
{
	int d1,d2,d3,num;
	printf("Enter a 3 digit number :");
	scanf("%d",&num);
	d1=num%10;
	num=num/10;
	printf("%d\n",d1);
	d2=num%10;
	num=num/10;
	printf("%d\n",d2);
	d3=num%10;
	printf("%d\n",d3);
}
