#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	int res = 1;
	int i;
	
	for(i=1;i<=n;i++)
		res=res*i;
	
	return res;	   
}

int combination(int n, int r)
{
	int high, low;
	high = factorial(n);
	low = (factorial(n-r))*(factorial(r));
	return(high/low);
}

int main(void)
{
	int n,r;
	int result;
	
	printf("input two integer : ");
	scanf("%d,%d",&n,&r);
	
	result=combination(n,r);
	printf("the result of combination two integer is %d",result);
	
	return 0;
}

