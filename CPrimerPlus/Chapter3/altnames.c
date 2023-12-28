/*可移植整数类型名*/

#include <stdio.h>
#include <inttypes.h> //支持可移植类型

int main_3_6(void) {
	int32_t me32;

	me32 = 45933954;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);

	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" "d" "\n",me32);//在该计算机上无法运行，错误：MSB802，无法找到v143的生成工具

	return 0;
}