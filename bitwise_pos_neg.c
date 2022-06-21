#include<stdio.h>
int main()
{
	int num, res;

	printf("Enter num value : ");
	scanf("%d", &num);

	res = num >> 31 & 1;                   //check num is positive or negative number
	if(res == 0)
	printf("%d is positive number\n", num);
	else
	printf("%d is negative number\n", num);
}
