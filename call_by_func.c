/*#include <stdio.h>
void print_array(int *ptr, int num)
{
	int i=0;
	for(i=0;i<num;i++){
		printf("%d",*(ptr+i));}		
}
void main()
{
	int a[]={1,2,3,4,5,6};
	int n=6;
	print_array(a,n);
}*/

#include <stdio.h>
void update_array(int *ptr, int num)
{
	int i=0;
	for(i=0;i<num;i++){
		*(ptr+i)=(*(ptr+i)+1);
		printf("%d",*(ptr+i));}		
}
void main()
{
	int a[]={1,2,3,4,5,6};
	int n=6;
	update_array(a,n);
}
