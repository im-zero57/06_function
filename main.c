#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int compute_sum(int n);


int main(void) {
	
	int sum;
	sum = compute_sum(100);
	printf("sum=%d\n",sum);

}

int compute_sum(int n)
{
	int i;
	int result = 0;
	for(i=1;i<=n;i++)
		result +=i;
	return result;	
}
