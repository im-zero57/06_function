#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b)
{
	int output;
	output=a+b;
	return output;
}

int square(int n)
{
	return(n*n);
}

int get_max(int a,int b)
{
	if(a>b)
		return (a);
	else
		return (b);	
}

int main() {
	int a,b;
	a=2;
	b=5;
	
	int result_sumTwo;
	result_sumTwo = sumTwo(a,b);
	
	printf("the result of sum two number is %d\n",result_sumTwo);
	printf("the result of square 2 is %d\n",square(a));
	printf("the result of square 5 is %d\n",square(b));
	printf("the result of larger number 2 and 5 is %d\n",get_max(a,b));
				
	return 0;
}
