#include<stdio.h>
int main()
{
	int num;

	printf("Enter num value : ");
	scanf("%d", &num);

	printf("Binary bits of %d is : ", num);
	for(int i = 31; i >= 0; i--)
	{
	if(num >> i & 1)         //print binary bits of a number
	printf("1");
	else
	printf("0");
	}
	printf("\n");
}
	
