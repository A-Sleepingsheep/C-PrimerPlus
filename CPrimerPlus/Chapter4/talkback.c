//4.1 演示与用户交互
#include <stdio.h>
#include <string.h>

#define DENSITY 62.4 //人体密度

int main_4_1(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cube feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}