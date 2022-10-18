//10.reverse of a given number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter your number ");
	scanf("%d",&n);
	reverse(n);
}
int reverse(int n)
{
	if(n==0)
	return;
	printf("%d",n%10);         //example is 26  % this operator gives the reminder i.e 6 (print)
	reverse(n/10);             //and then 26/10 =2   then 2%10=2
}
