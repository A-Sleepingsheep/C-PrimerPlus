#include <stdio.h>
#define PI 3.141593

int main_4_6(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestant ate %f berry pies.\n", number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);
	return 0;
}