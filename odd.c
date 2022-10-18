#include<stdio.h>
int oddnatural(int);
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	oddnatural(n);
}
int oddnatural(int n)
{
	if(n>0)
	{
		oddnatural(n-1);
		printf("%d ",2*n-1);
	}
	return 0;
}

