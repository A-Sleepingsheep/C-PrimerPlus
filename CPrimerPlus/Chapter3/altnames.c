/*����ֲ����������*/

#include <stdio.h>
#include <inttypes.h> //֧�ֿ���ֲ����

int main_3_6(void) {
	int32_t me32;

	me32 = 45933954;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);

	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" "d" "\n",me32);//�ڸü�������޷����У�����MSB802���޷��ҵ�v143�����ɹ���

	return 0;
}