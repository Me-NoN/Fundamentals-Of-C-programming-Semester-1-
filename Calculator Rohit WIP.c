/* Calculator */
#include <stdio.h>
#include <math.h>
void main()
{
	float x,y,ans;
	int ch;
	
	printf("#########################################################################\n");
	printf("#\t\t\t\t**CALCULATOR**\t\t\t\t#");
	while(1)
	{	
		printf("\n#########################################################################\n");
		printf("#1. x+y\t\t2. x-y\t\t3. x*y\t\t4. x/y\t\t5. x%y  #\n#6. x^2\t\t7. sqrt(x)\t8. x^y\t\t9. 1/x\t\t10. x!  #\n#11.$ to ₹\t12.₹ to $\t13.Deci to Bin\t14.Deci to Oct\t15.Exit #");
		printf("\n#########################################################################\n");
		printf("# Select Choice 1-15 :");
		scanf("%d",&ch);
		if(ch==1)
		{
			char ctr=1;
			printf("# Enter Number 1:");
			scanf("%f",&x);
			printf("# Enter Number 2:");
			scanf("%f",&y);
			ans=x+y;
			printf("# The Sum is %2f\t\t\t\t\t\t\t#", ans);
			while(ctr==1)
			{
				printf("\n# Do You Want to Continue (Y/N):");
				scanf("%c",&ctr);
			
				if (ctr=="Y" || ctr=="y")
				{
					return main();
				}
				else
				{	printf("\n#\t\t\t\tTHANK YOU\t\t\t\t#");
					printf("\n#########################################################################\n");
					break;
				}
			}	
		}
		if(ch==2)
		{
			printf("# Enter Number 1:");
			scanf("%f",&x);
			printf("# Enter Number 2:");
			scanf("%f",&y);
			ans=x-y;
			printf("# The Difference is %f", ans);
		}
		if(ch==3)
		{
			printf("# Enter Number 1:");
			scanf("%f",&x);
			printf("# Enter Number 2:");
			scanf("%f",&y);
			ans=x*y;
			printf("# The Product is %f", ans);
		}
		if(ch==4)
		{
			printf("# Enter Number 1:");
			scanf("%f",&x);
			printf("# Enter Number 2:");
			scanf("%f",&y);
			ans=x/y;
			printf("# The Quotient is %f", ans);
		}
		if(ch==5)
		{
			int e,f;			
			printf("# Enter Number 1:");
			scanf("%d",&e);
			printf("# Enter Number 2:");
			scanf("%d",&f);
			ans=e%f;
			printf("\n# The Remainder is %f", ans);
		}
		if(ch==6)
		{
			printf("# Enter a Number:");
			scanf("%f",&x);
			ans=x*x;
			printf("# The Square is %f", ans);
		}
		if(ch==7)
		{
			printf("# Enter a Number:");
			scanf("%f",&x);
			ans=sqrt(x);
			printf("# The Square Root is %f", ans);
		}
		if(ch==8)
		{
			printf("# Enter Number 1:");
			scanf("%f",&x);
			printf("# Enter Number 2:");
			scanf("%f",&y);
			ans=pow(x,y);
			printf("# %f^%fis %f",x,y,ans);
		}
		if(ch==9)
		{
			printf("# Enter a Number:");
			scanf("%f",&x);
			ans=1/x;
			printf("# The Reciprocal is %f", ans);
		}
		if(ch==10)
		{
			float fac=1;
			ans=1;
			printf("# Enter a Number:");
			scanf("%f",&x);
			while(fac<=x);
			{
				ans=fac*ans;
				fac++;
			}		
			printf("# The Factorial is %f", ans);
		}
		if(ch==11)
		{
			printf("# Enter Amount in USD:");
			scanf("%f",&x);
			ans=x*74.51;
			printf("# $%f is equivalent to ₹%f",x,ans);
		}
		if(ch==12)
		{
			printf("# Enter Amount in ₹:");
			scanf("%f",&x);
			ans=x/74.51;
			printf("# ₹%f is equivalent to %f$",x,ans);
		}
		if(ch==13)
		{
			int num,binary=0,remainder=0,place=1;
			printf("# Enter decimal number:");
			scanf("%d",&num);
			while(num>=1)
			{
				remainder=num%2;
				num=num/2;
				binary=binary+(remainder*place);
				place=place*10;
			}
			printf("# Binary Equivalent is %d",binary);
		}
		if(ch==14)
		{
			int num,binary=0,remainder=0,place=1;
			printf("# Enter decimal number:");
			scanf("%d",&num);
			while(num>=1)
			{
				remainder=num%8;
				num=num/8;
				binary=binary+(remainder*place);
				place=place*10;
			}
			printf("# Octal Equivalent is %d",binary);
		}
		if(ch==15)
		{
			printf("#\t\t\t\tTHANK YOU\t\t\t\t#");
			printf("\n#########################################################################\n");
			break;
		}
		else
		{
			printf("# Wrong Input!!! Please Try Again\t\t\t\t\t#");
		}
	}
}
	


