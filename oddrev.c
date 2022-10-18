//4 odd natural number reverse
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	oddrev(n);    /*step 1*/
	return 0;
}
int oddrev(int n)
{
	if(n>0)      /* base case */
	{
		printf("%d ",2*n-1);
		oddrev(n-1);
	}
	return 0;
}

