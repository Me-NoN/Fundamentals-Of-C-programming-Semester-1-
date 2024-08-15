/*Percentage of 3 subjets*/
#include <stdio.h>
void main()
{ 
	float s1,s2,s3,sum,tot,perc;
	printf("Enter Marks of first Subject:");
	scanf("%e",&s1);
	printf("Enter Marks of Second Subject:");
	scanf("%e",&s2);
	printf("Enter Marks of Third Subject:");
	scanf("%e",&s3);
	printf("Enter Max Marks of all subjects:");
	scanf("%f",&tot);
	sum=(s1+s2+s3);
	perc=(sum/tot)*100;
	if (perc >= 80.0)
	{
		printf("Student gets Distinction");
	}
	else if ((perc <= 60.0) && (perc >= 79.0))
	{
		printf("Student gets First class\n");
	}
	else
	{
		printf("Student Passed\n");
	}
	printf("\npercentage of student is :%f",perc);
}
