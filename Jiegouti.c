#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct book
{
	char name[20];
	short price;
};
int main()
{
	struct book b1 = {"�������ѧ�뼼��", 132 };
	printf("������%s\n", b1.name);
	printf("�۸�= %d\n", b1.price);
	return 0;
}