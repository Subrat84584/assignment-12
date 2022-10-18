//7.write a function to print square of first n natural number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	square(n);     /*step 1 */
	return 0;
}
int square(int n)
{
	if(n>0)        /*base case step 3*/
	{
		square(n-1);        /*step 2 */
		printf("%d ",n*n);
	}
	return 0;
}
