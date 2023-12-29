#include <stdio.h>
#define BLURB "Authentic imitation"

int main_4_10(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	return 0;
}