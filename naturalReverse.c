//2
#include<stdio.h>
int natural(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	natural(n);
	return 0;
}
int natural(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		natural(n-1);
	}
	return 0;
}
