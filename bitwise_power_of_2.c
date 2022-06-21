#include<stdio.h>
int main()
{
	int num, res;

	printf("Enter num value : ");
	scanf("%d", &num);

	res = num & (num - 1);                   //check num is power of 2
	if(res == 0)
	printf("%d is power of 2\n", num);
	else
	printf("%d is not a power of 2\n", num);
}
