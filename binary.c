//8.write a recursive program to print the binary number of a given decimal number.
#include<stdio.h>
int binary(int);
int main()
{
	
	binary(9);
}
int binary(int n)
{
	if(n==0)
    return;
    printf("%d",n&1);
	binary(n>>1);
}
