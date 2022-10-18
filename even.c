//5.write the function to print the N even natural number.
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
		even(n-1);
		printf("%d ",2*n);
	}
	return 0;
}
