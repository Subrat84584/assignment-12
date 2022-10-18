//6.even in reverse order.
#include<stdio.h>
int even(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	even(n);    /*step 1*/
	return 0;
} 
int even(int n)
{
	if(n>0)   /*base case step 3*/
	{
		printf("%d ",2*n);     /* step 2 */ 
		even(n-1);
	}
	return 0;
}
