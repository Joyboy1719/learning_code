#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int line = 0;
	printf("�����ѧ����Ϊ�����С��\n");
	while (line < 20000)
	{
		printf("��һ�д��� :%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("��Ϊ���У��õ���offer,����ITERATOR\n");
	return 0;
}
