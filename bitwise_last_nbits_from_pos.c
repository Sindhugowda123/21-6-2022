#include<stdio.h>
int main()
{
	int num, n, pos, res1, res2, res3;

	printf("Enter num value : ");
	scanf("%d", &num);

	printf("Enter number of bits : ");
	scanf("%d", &n);

	printf("Enter position value : ");
	scanf("%d", &pos);

	res1 = num | ( ( 1 << n ) - 1 ) << pos - n + 1;  //setting last n bits from position pos, pos starts from 1
	printf("After setting last %d bits form %d position of %d : num = %d\n", n, pos, num, res1);


	res2 = num & ~ ( ( ( 1 << n ) - 1 ) << pos - n + 1);  //clearing last n bits from position pos
	printf("After clearing last %d bits from %d position of %d : num  = %d\n", n, pos, num, res2);


	res3 = num ^ ( ( 1 << n ) - 1 ) << pos - n + 1;   //toggling last n bits from position pos
	printf("After toggling last %d bits from %d position of %d : num  = %d\n", n, pos, num, res3);
}
