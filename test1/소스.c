#include <stdio.h>_dbdao.h

int main(void)
{
	//���� 1�� �ذ�
	int a, b;

	printf("������ �Է��ϸ� ����� �ٲ㺸��\n");
	scanf_s("%d", &a);
	a = ~a+1;
	printf("��� : = %d\n", a);

	//-------------------------------------------------------
	printf("�Է� �� ���� �ι�� ��� �ý���!\n");
	scanf_s("%d", &b);
	b = b << 1;
	printf("��� : = %d", b);


	//���� 2�� �ذ�



	return 0;
}