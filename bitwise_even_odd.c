#include<stdio.h>
int main()
{
	int num, res;

	printf("Enter num value : ");
	scanf("%d", &num);

	res = num & 1;                          //check num is even or odd
	if(res == 0)
	printf("%d is even number\n", num);
	else
	printf("%d is odd number\n", num);
}
