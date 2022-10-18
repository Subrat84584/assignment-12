//9.
#include<stdio.h>
int binary(int);
int main()
{
	
	binary(15);
}
int binary(int n)
{
	if(n==0)
    return;
    binary(n/8);
    printf("%d",n%8);
}
