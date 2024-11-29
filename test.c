#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char* pa = NULL;
//	printf("%d", sizeof(char*));
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;

	char* pc = &a;
	*pc = 0;
	return 0;


	//指针类型决定了在被解引用的时候访问几个字节
}