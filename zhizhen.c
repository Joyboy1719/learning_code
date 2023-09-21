#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double a = 3.14;
	double*cd = &a;
	*cd = 5.20;
	printf("%lf\n", a);
	return 0;
}