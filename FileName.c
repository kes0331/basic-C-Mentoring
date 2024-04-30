#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double x;
	double y;
	printf("평수 입력:");
	scanf("%lf", &x);

	y = x * 3.30;
	printf("입렫된 평수:%.6lf", x);
	printf("제곱미터:%.6lf", y);

	return 0;
}