#include<stdio.h>
int main()
{
	int num, res1, res2, res3;
	printf("Enter num value : ");
	scanf("%d", &num);
	
	res1 = num & 1;  //clear last bit
	printf("After clearing last bit of %d : num = %d\n", num, res1);


	res2 = num | 1;  //set last bit
	printf("After settig last bit of %d : num  = %d\n", num, res2);


	res3 = num ^ 1;  //toggle last bit
	printf("After toggling last bit of %d : num  = %d\n", num, res3);
}
	
