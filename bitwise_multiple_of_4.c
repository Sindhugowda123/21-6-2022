#include<stdio.h>
int main()
{
	int num, res;

	printf("Enter num value : ");
	scanf("%d", &num);

	res = num & 3;                   //check num is multiple of 4
	if(res == 0)
	printf("%d is multiple of 4\n", num);
	else
	printf("%d is not a multiple of 4\n", num);
}
