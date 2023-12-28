/*C Primer Plus 3.1实例程序 ：将与你的体重相等的白金转换成多少价值*/

#include <stdio.h>

int main_3_1(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	scanf("%f", &weight);

	/*假设白金的价格是每盎司$1700*/
	/*14.5833用于把英镑常衡盎司转换成金衡盎司*/
	value = 1700.00 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}

