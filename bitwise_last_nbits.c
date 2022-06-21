#include<stdio.h>
int main()
{
	int num, n, res1, res2, res3;

	printf("Enter num value : ");
	scanf("%d", &num);

	printf("Enter number of bits : ");
	scanf("%d", &n);

	res1 = num | ( ( 1 << n ) - 1 );  //setting last n bits
	printf("After setting last %d bits of %d : num = %d\n", n, num, res1);


	res2 = num & ~ ( ( 1 << n ) - 1 );  //clearing last n bits
	printf("After clearing last %d bits of %d : num = %d\n", n, num, res2);


	res3 = num ^ ( ( 1 << n ) - 1 );   //toggling last n bits
	printf("After toggling last %d bits of %d : num = %d\n", n, num, res3);
}
