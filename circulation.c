#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int line = 0;
	printf("进入大学，成为计算机小白\n");
	while (line < 20000)
	{
		printf("敲一行代码 :%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("成为大佬，拿到大厂offer,创造ITERATOR\n");
	return 0;
}
