#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double x;
	double y;
	printf("��� �Է�:");
	scanf("%lf", &x);

	y = x * 3.30;
	printf("�Ԏ��� ���:%.6lf", x);
	printf("��������:%.6lf", y);

	return 0;
}