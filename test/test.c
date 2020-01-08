#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>_dbdao.h



//계산기를 만들어보즈아~!

int main(void)

{
	int a, b, c;

	int val;
	   
	printf("더하기\n");
	printf("총 3개의 정수 입력\n");
	printf("정수를 입력해주세요\n");
	scanf("%d", &a);
	printf("정수를 또 하나 입력해주세요\n");
	scanf("%d", &b);
	printf("마지막 정수를 입력해주세요\n");
	scanf("%d", &c);
	val = a + b + c;
	printf(":%d\n", val);


	   	   
	return 0;

}