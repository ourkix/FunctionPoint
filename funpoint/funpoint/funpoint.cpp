// funpoint.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
void fun(void)
{
	printf("123456\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	int *p[10];
	void (*f)(void);

	//((void(*)(void))&fun)();
	int i = (int)&fun;
	//printf("%d", i);
	//((*(int*)0x08003000) & 0x2FFE0000)
	if ((0x08003000 & 0x2FFE0000) == 0x20000000)//���ջ����ַ�Ƿ�Ϸ�.

	{
		printf("234234234234\n");
	}
	f = (void(*)(void))i;
	f();
	f();
	char c = getchar();

}

