#include <stdio.h>

/*整数超出相应类型的情况*/
int main_3_3_1(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);
}