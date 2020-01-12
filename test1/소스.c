#include <stdio.h>_dbdao.h

int main(void)
{
	//문제 1번 해결
	int a, b;

	printf("정수를 입력하면 양수로 바꿔보자\n");
	scanf_s("%d", &a);
	a = ~a+1;
	printf("결과 : = %d\n", a);

	//-------------------------------------------------------
	printf("입력 한 값을 두배로 출력 시스템!\n");
	scanf_s("%d", &b);
	b = b << 1;
	printf("결과 : = %d", b);


	//문제 2번 해결



	return 0;
}