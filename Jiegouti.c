#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct book
{
	char name[20];
	short price;
};
int main()
{
	struct book b1 = {"计算机科学与技术", 132 };
	printf("书名：%s\n", b1.name);
	printf("价格= %d\n", b1.price);
	return 0;
}